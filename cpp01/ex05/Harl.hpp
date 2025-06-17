/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:57:31 by htharrau          #+#    #+#             */
/*   Updated: 2025/04/24 18:58:17 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl {

	private:
		typedef	void 	(Harl::*f)();
		static const 	std::string array[4];
		static const 	f function[4];
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		
	
	public:
		Harl(void);
		~Harl();
		void	complain(std::string message);	

} ;
