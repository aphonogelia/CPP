/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:50:45 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/02 16:19:48 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*******************************************************************************
PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.	
*******************************************************************************/

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	public:
	
		// Coplien
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& inputTarget);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		virtual ~PresidentialPardonForm();

		// Funtions
		virtual void execute(const Bureaucrat& b) const;
} ;