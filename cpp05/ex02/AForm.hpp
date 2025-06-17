/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:42:21 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/01 18:11:55 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rappels Abstract Form:
- You cannot instantiate (create) objects of an abstract class directly.
- However, you can create pointers or references to an abstract class, and you 
  can use those to point to objects of derived (concrete) classes. Example:
  AForm* form = new ShrubberyCreationForm("garden");  						  */


#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat; // to avoid circular references 

class AForm {
	
	private:
	
		const std::string formName;
		const std::string target;
		bool isSigned;
		const int signGrade;
		const int execGrade;


	public:

		static const std::string defaultFName;
		static const std::string defaultTarget;
		static const int defaultSEGrade;
	
		// COPLIEN
		AForm();
		AForm(const std::string& inputName, const std::string& inputTarget, int inputSigGr, int inputExGr);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();

		// OTHER
		void beSigned(const Bureaucrat& b);
		virtual void execute(const Bureaucrat& b) const = 0;


		// GETTERS
		int getExecGrade() const;
		int getSignGrade() const;
		bool getSignStatus() const;
		const std::string& getFormName() const;
		const std::string& getTarget() const;

		// EXCEPTIONS
		class GradeTooLowException : public std::exception {
			private :
				std::string errorMsg;
			
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
		class ExecGradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		} ;
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		} ;

};


std::ostream& operator<<(std::ostream& os, const AForm& f);