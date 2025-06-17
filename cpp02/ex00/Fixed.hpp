/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:32:45 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/01 16:21:51 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

	private:
		int integer; 
		static const int decimal_bit = 8;
	
	public:
		Fixed();
		// Fixed(int integer);
		Fixed(const Fixed& other); 
		Fixed& operator=(const Fixed& other); 
		~Fixed();
		int getRawBits(void) const; 
		void setRawBits(int const raw);
	
} ;