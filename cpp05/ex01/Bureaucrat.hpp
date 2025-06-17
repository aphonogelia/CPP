/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:41:26 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/30 20:03:32 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

#include <string>
#include <iostream>
#include <exception>

class Form; // to avoid circular references 

class Bureaucrat {

	private :
		const std::string name;
		int grade;

	public :
		static const int maxGrade = 1;
		static const int minGrade = 150;
		
		// COPLIEN
		Bureaucrat();
		Bureaucrat(const std::string& inputName, int inputGrade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		// OTHER
		void incrementGrade();
		void decrementGrade();
		void signForm(Form& form) const;
	
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

} ;

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
