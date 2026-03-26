/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:42:21 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/02 17:08:10 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat; // to avoid circular references 

class Form {
	
	private:
		const std::string formName;
		bool isSigned;
		const int signGrade;
		const int execGrade;
		
		
	public:
	
		// STATIC CONST
		static const std::string defaultFName;
		static const int defaultSEGrade = 1;
		static const std::string defaultFormEr ;
		
		// COPLIEN
		Form();
		Form(const std::string& inputName, int inputSigGr, int inputExGr);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		// OTHER
		void beSigned(const Bureaucrat& b);

		// GETTERS
		int getExecGrade() const;
		int getSignGrade() const;
		bool getSignStatus() const;
		const std::string& getFormName() const;

		// EXCEPTIONS
		class GradeTooLowException : public std::exception {
			private :
				std::string errorMsg;
				static const std::string defaultFormEr;
			public :
				GradeTooLowException();
				GradeTooLowException(const std::string& er);
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		} ;
		class GradeTooHighException : public std::exception {
			private:
				std::string errorMsg;
			public:
				GradeTooHighException();
				GradeTooHighException(const std::string& er);
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		} ;
		class AlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		} ;
};


std::ostream& operator<<(std::ostream& os, const Form& f);