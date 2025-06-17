/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:53:59 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/02 12:20:44 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
The intern has one key ability: the makeForm() function, taking 2 parameters: 
		. the first one represents the name of a form, and 
		. the second one represents the target of the form. 
	- It returns a pointer to a AForm object (corresponding to the 1st parameter),
	  with its target initialized to the second parameter.
	- It should print something like: Intern creates <form>
	- If the provided form name does not exist, print an explicit error message.
***************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

	public:
	
		// enum for switch
		enum	FormType {	ShrubberyCreation,
							RobotomyRequest,
							PresidentialPardon,
							Unknown	} ;

		// Coplien Form
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();

		// Other
		FormType getFormType(const std::string& form) const;
		AForm* makeForm(const std::string& form, const std::string& target) const;

		// Exception
		class FormDontExistException : public std::exception {
			public:
				virtual const char* what() const throw();
		} ;
} ;
