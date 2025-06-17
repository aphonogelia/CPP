/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:14:23 by htharrau          #+#    #+#             */
/*   Updated: 2025/01/12 14:14:24 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie {

private:
	std::string name;
	
public:
	Zombie();
	Zombie(std::string input);
	~Zombie();

	// std::string getName(void) const {return name; };
	void announce(void);
	void baptize(std::string newName);

};

Zombie*	zombieHorde(int N, std::string name );
void	hordeAnnounce(int N, Zombie *horde);
