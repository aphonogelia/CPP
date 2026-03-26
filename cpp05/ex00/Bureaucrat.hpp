/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:41:26 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/31 13:29:31 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string>
#include <iostream>
#include <exception>


class Bureaucrat {

	private :
		const std::string name;
		int grade;
			
	public :
		
		// CONSTANTES
		static const int maxGrade = 1;
		static const int minGrade = 150;
		static const std::string defaultName;
		
		// COPLIEN
		Bureaucrat();
		Bureaucrat(const std::string& inputName, int inputGrade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();
	
		// GETTERS
		const std::string& getName() const;
		int getGrade() const;

		// EXCEPTION CLASSES
		class GradeTooHighException : public std::exception {
			private :
				std::string errorMsg;
			public:
				GradeTooHighException();
				GradeTooHighException(const std::string& msg);
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		} ;
		class GradeTooLowException : public std::exception {
			private :
				std::string errorMsg;
			public :
				GradeTooLowException();
				GradeTooLowException(const std::string& msg);
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		} ;

		// OTHER
		void incrementGrade();
		void decrementGrade();

} ;

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);