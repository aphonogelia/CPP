/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:16:15 by htharrau          #+#    #+#             */
/*   Updated: 2025/01/12 14:16:16 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"


class HumanA {

	private:
		std::string	name;
		Weapon&		weapon;
		
	public: 
		HumanA(const std::string& inputName, Weapon& inputWeapon) ;	
		~HumanA();
		void attack() const;

};
	