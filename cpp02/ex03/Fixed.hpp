/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:01:59 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/08 17:38:45 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>

class Fixed {

	private:
	
		int 				fixedPoint; 
		static const int 	dec_bit = 8;


	public:
	
		// const, dest
		Fixed();
		explicit Fixed(const int inputInt);
		explicit Fixed(const float inputFloat);
		Fixed(const Fixed& other); 
		~Fixed();
		
		// conversion and raw const for add/sub
		float		 toFloat(void) const;
		int			 toInt(void) const;
		static Fixed fromRaw(int intRawInput);
		
		// = operators
		Fixed& operator=(const Fixed& other);
		Fixed& operator+=(const Fixed& other);
		Fixed& operator-=(const Fixed& other);
		Fixed& operator*=(const Fixed& other);
		Fixed& operator/=(const Fixed& other);
		
		// +, -, /, *
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		
		// comparisons
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		// incrementation
		Fixed& operator--(); 
		Fixed& operator++();
		Fixed operator--(int); 
		Fixed operator++(int);
		
		// min and max
		static const Fixed&	min(const Fixed& first, const Fixed& second) ;
		static Fixed&		min(Fixed& first, Fixed& second);
		static const Fixed&	max(const Fixed& first, const Fixed& second);
		static Fixed&		max(Fixed& first, Fixed& second);

		// absolute
		static Fixed absFixed(const Fixed& first, const Fixed& second);

		// print bits
		std::string printBits() const;

} ;

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);