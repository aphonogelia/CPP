/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:36:15 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/07 14:54:14 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




/*******************************************************************************

Objective :
Implement a utility class Serializer that converts pointers to unsigned integers
and back, demonstrating low-level memory manipulation with reinterpret_cast.

reinterpret_cast is used for pointer ↔ integer conversions.
uintptr_t ensures portability across architectures.

uintptr_t serialize(Data* ptr);
It takes a pointer and converts it to the unsigned integer type uintptr_t.
Data* deserialize(uintptr_t raw);
It takes an unsigned integer parameter and converts it to a pointer to Data.
*******************************************************************************/

#pragma once

#include <string>
#include <stdint.h>
#include <iostream> 

#include "Data.hpp"


class Serializer {

	private:

		// Coplien Form
		Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		~Serializer();
	

	public:

		// Other
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};
