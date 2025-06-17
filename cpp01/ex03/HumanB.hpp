/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:16:10 by htharrau          #+#    #+#             */
/*   Updated: 2025/01/12 14:16:11 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"


class HumanB {

	private:
		const std::string	name;
		Weapon*				weapon;
		
	public: 
		HumanB(const std::string& inputName) ;	
		~HumanB();
		void attack() const;
		void setWeapon(Weapon &weapon);

};
	