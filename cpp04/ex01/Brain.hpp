/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:02:16 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/12 15:39:56 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include <string>


class Brain {

	private :
		std::string ideas[100];

	public :
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string getIdea(int i); // return a copy, not a ref as we do not want to modify it
		void setIdea(int i, const std::string& input);

} ;
