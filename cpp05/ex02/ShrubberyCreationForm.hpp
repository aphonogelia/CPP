/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:50:57 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/02 16:19:42 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************
ShrubberyCreationForm: Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII 
trees inside it.
******************************************************************************/

#pragma once

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {

	public:
	
		// Coplien
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& inputTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		virtual ~ShrubberyCreationForm();

		// Funtions
		virtual void execute(const Bureaucrat& b) const;
} ;