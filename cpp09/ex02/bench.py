#!/usr/bin/env python3

import subprocess
import random
import matplotlib.pyplot as plt
import matplotlib.gridspec as gridspec

BINARY = "./PMergeMe"
SIZES  = [1, 2, 3, 5, 8, 10, 15, 20, 30, 50, 75, 100, 150, 200, 300,
          500, 750, 1000, 1500, 2000, 2500, 3000]
REPS   = 5  # average over N runs per size

vect_times  = []
deq_times   = []
vect_comps  = []
deq_comps   = []

for size in SIZES:
    vt, dt, vc, dc = [], [], [], []
    for _ in range(REPS):
        args = random.sample(range(1, 100000), size)
        cmd  = [BINARY] + [str(x) for x in args]
        out  = subprocess.run(cmd, capture_output=True, text=True).stdout

        for line in out.splitlines():
            if "std::vector" in line and "Time" in line:
                vt.append(float(line.split(":")[-1].strip().split()[0]))
            elif "std::deque" in line and "Time" in line:
                dt.append(float(line.split(":")[-1].strip().split()[0]))
            elif "comparisons (vector)" in line:
                vc.append(int(line.split(":")[-1].strip()))
            elif "comparisons (deque)" in line:
                dc.append(int(line.split(":")[-1].strip()))

    vect_times.append(sum(vt) / len(vt) if vt else 0)
    deq_times.append(sum(dt)  / len(dt) if dt else 0)
    vect_comps.append(sum(vc) / len(vc) if vc else 0)
    deq_comps.append(sum(dc)  / len(dc) if dc else 0)

    print(f"size={size:5d}  vect={vect_times[-1]:8.1f}us  deq={deq_times[-1]:8.1f}us  "
          f"cmp_v={vect_comps[-1]:.0f}  cmp_d={deq_comps[-1]:.0f}")

# ── Plot ──────────────────────────────────────────────────────────────────────

fig = plt.figure(figsize=(14, 10))
gs  = gridspec.GridSpec(2, 1, hspace=0.4)

# Time
ax1 = fig.add_subplot(gs[0])
ax1.plot(SIZES, vect_times, marker='o', label='std::vector', color='steelblue')
ax1.plot(SIZES, deq_times,  marker='s', label='std::deque',  color='tomato')
ax1.set_title('Time to sort (averaged over {} runs)'.format(REPS))
ax1.set_xlabel('List size')
ax1.set_ylabel('Time (us)')
ax1.legend()
ax1.grid(True, alpha=0.3)

# Comparisons
ax2 = fig.add_subplot(gs[1])
ax2.plot(SIZES, vect_comps, marker='o', label='vector comparisons', color='steelblue')
ax2.plot(SIZES, deq_comps,  marker='s', label='deque comparisons',  color='tomato')
ax2.set_title('Number of comparisons')
ax2.set_xlabel('List size')
ax2.set_ylabel('Comparisons')
ax2.legend()
ax2.grid(True, alpha=0.3)

plt.savefig('pmerge_stats.png', dpi=150, bbox_inches='tight')
print("\nSaved to pmerge_stats.png")
plt.show()