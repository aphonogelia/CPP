/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:15:56 by htharrau          #+#    #+#             */
/*   Updated: 2025/01/12 14:15:57 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** *
Implement a Weapon class that has:
• A private attribute type, which is a string.
• A getType() member fction that returns a constant reference to type.
• A setType() member fction that sets type using the new value passed as a parm.
 * ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon {

	private:
		std::string type;

	public: 
		Weapon(const std::string& inputWeapon);
		~Weapon(void);
		const std::string& getType(void) const;
		void setType(const std::string& newWeapon);
	
};
