/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:50:51 by htharrau          #+#    #+#             */
/*   Updated: 2025/06/02 16:19:59 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************
 RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises, then informs that <target> has been robotomized
successfully 50% of the time. Otherwise, it informs that the robotomy failed. 
*******************************************************************************/


#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

	public:
	
		// Coplien
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& inputTarget);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		virtual ~RobotomyRequestForm();

		// Funtions
		virtual void execute(const Bureaucrat& b) const;
} ;