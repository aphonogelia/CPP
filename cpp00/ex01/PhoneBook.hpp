/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:31:16 by htharrau          #+#    #+#             */
/*   Updated: 2025/01/12 13:26:12 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	
private:

	Contact contacts[8];
	int count;
	std::string nonEmpty(std::string prompt) const;
	std::string truncate(const std::string &str) const;
	
	
public:

	PhoneBook();
	void addContact();
	void searchContact() const;
	Contact getContact(int index) const;
	void printContacts() const;
	int getCount() const;
	
};

#endif
