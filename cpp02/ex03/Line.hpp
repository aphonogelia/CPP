/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:22:12 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/09 15:56:07 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once


#define EPSILON 0.004f // cannot be smaller than 0.00390625

class Line {

	private:
		Point p1; 
		Point p2;
		Fixed m;
		Fixed b;
		bool vertical;

 
	public:
		Line();
		Line(Point i, Point j);
		Line(const Line& inputPoint);
		Line& operator=(const Line& inputLine);
		~Line();
		
		bool coLineaire(Point k) const;
		bool aboveLeft(Point k) const;
};


