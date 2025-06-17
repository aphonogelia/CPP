/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:31:50 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/11 18:18:44 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*******************************************************************************
						THE DIAMOND PROBLEM
						
							 ClapTrap
							 /      \
						ScavTrap   FragTrap
						     \      /
						    DiamondTrap
						
Problem: If you inherit from both ScavTrap and FragTrap normally, DiamondTrap 
will have two copies of ClapTrap's members and methods (one from each parent).
This causes ambiguity and redundancy.

Solution: Virtual Inheritance
To ensure DiamondTrap has only one ClapTrap base, use virtual inheritance in the
declarations of ScavTrap and FragTrap: (ScavTrap.hpp and FragTrap.hpp)
class ScavTrap : virtual public ClapTrap { ... };
class FragTrap : virtual public ClapTrap { ... };
-> tells the compiler to share a single ClapTrap base among all derived classes,
solving the diamond problem.
*******************************************************************************/


#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();

		void whoAmI() const;
		
} ;