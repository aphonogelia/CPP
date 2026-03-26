/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:02:35 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/13 12:16:04 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class AAnimal {

	protected : 
		std::string type;
	
	public :
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0;
		// Une classe C++ est abstraite uniquement si elle contient au moins une
		//  méthode virtuelle pure. Une méthode virtuelle pure se déclare ainsi:
		// virtual void makeSound() const = 0; 
		// Le = 0 rend la méthode pure, ce qui rend la classe abstraite et empê-
		// che d’instancier directement des objets de cette classe.
		
} ;
