/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:09:35 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/01 16:12:16 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <cmath>



class Fixed {

	private:
		int integer; 
		static const int dec_bit = 8;
	
	public:
		Fixed();
		Fixed(const int inputInt);
		Fixed(const float inputFloat);
		Fixed(const Fixed& other); 
		~Fixed();
		
		Fixed& operator=(const Fixed& other);
		// Fixed& operator<<(const Fixed& other); 
		
		// int		getRawBits(void) const;
		// void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
} ;

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);