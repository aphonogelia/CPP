/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:32:10 by htharrau          #+#    #+#             */
/*   Updated: 2025/09/26 16:50:00 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	protected:
		static const unsigned int defaultHitPoints = 100;
		static const unsigned int defaultEnergyPoints = 100;
		static const unsigned int defaultAttackDamage = 30;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();

		void highFivesGuys() const;
		unsigned int getDefaultHitPoints() const { return defaultHitPoints; }
		unsigned int getDefaultEnergyPoints() const { return defaultEnergyPoints; }
		unsigned int getDefaultAttackDamage() const { return defaultAttackDamage; }
} ;
