/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:32:41 by htharrau          #+#    #+#             */
/*   Updated: 2026/01/22 12:13:51 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>


class Point {

	private:
		Fixed const x; 
		Fixed const y;

	public:
		Point();
		Point(Fixed i, Fixed j);
		Point(const Point& inputPoint);
		Point& operator=(const Point& inputPoint);
		bool operator!=(const Point& other) const;
		~Point();

		Fixed getX() const;
		Fixed getY() const;
		
};
