/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:17:07 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/06 21:33:52 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include <limits>
#include <sstream> // for stringstream
#include <iomanip> // for setprecision
#include <cmath> // for fabs

#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define RESET "\033[0m"


/*******************************************************************************
As this class doesn’t need to store anything at all, it must not be instantiable
by users -> we declare the constructors as PRIVATE, and all functions as STATIC 
*******************************************************************************/

class ScalarConverter {
	
	public:
	
		// Other
		static void convert(const std::string& input);
		
		// Exception
		class invalidInputException : public std::exception {
			public:
				virtual const char* what() const throw();
		} ;
	
	
	private : 
	
		// Coplien Form
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

		// helpers
		static void validInput(const std::string& input) ;
		static void handleChar(const std::string& input, bool* handled) ;
		static void pseudoliterals(const std::string& input, bool *handled);
		static void handleInt(const std::string& input, bool *handled);
		static void handleFloat(const std::string& input, bool *handled);
		static void handleDouble(const std::string& input, bool *handled);

} ;