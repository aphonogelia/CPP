/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:14:12 by htharrau          #+#    #+#             */
/*   Updated: 2025/01/13 13:52:27 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class Zombie {
	
private:
	std::string name;
	
public:
	Zombie(std::string input);
	~Zombie();
	// std::string getName(void) const {return name; };
	void announce(void);

};

// Static memory - Stack allocated zombie
Zombie*	newZombie(std::string name);

// Dynamic memory - Heap allocated zombie
void 	randomChump(std::string name);

