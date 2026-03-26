/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:32:10 by htharrau          #+#    #+#             */
/*   Updated: 2025/09/26 16:49:49 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	protected:
		static const unsigned int defaultHitPoints = 100;
		static const unsigned int defaultEnergyPoints = 50;
		static const unsigned int defaultAttackDamage = 20;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
		unsigned int getDefaultHitPoints() const { return defaultHitPoints; }
		unsigned int getDefaultEnergyPoints() const { return defaultEnergyPoints; }
		unsigned int getDefaultAttackDamage() const { return defaultAttackDamage; }

} ;
