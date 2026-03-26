/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:02:35 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/12 12:42:01 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal {

	protected : 
		std::string type;
	
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
		// Une classe C++ est abstraite uniquement si elle contient au moins une
		//  méthode virtuelle pure.
		// Une méthode virtuelle pure se déclare ainsi :
		// virtual void makeSound() const = 0; 
		// Le = 0 rend la méthode pure, ce qui rend la classe abstraite et empê-
		// che d’instancier directement des objets de cette classe.
		
} ;
