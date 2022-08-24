/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:29:31 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 18:34:50 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1 = (point.get_x() - a.get_x()) * (point.get_y() - b.get_y()) - (point.get_x() - b.get_x()) * (point.get_y() - a.get_y());
	Fixed d2 = (point.get_x() - b.get_x()) * (point.get_y() - c.get_y()) - (point.get_x() - c.get_x()) * (point.get_y() - b.get_y());
	Fixed d3 = (point.get_x() - c.get_x()) * (point.get_y() - a.get_y()) - (point.get_x() - a.get_x()) * (point.get_y() - c.get_y());

	if ((d1 > 0.f && d2 > 0.f && d3 > 0.f) || (d1 < 0.f && d2 < 0.f && d3 < 0.f))
		return (true);
	return (false);
}

int main(void) {
	Point a(1, 1);
	Point c(2, -1);
	Point b(-2, -1);
	Point p(0, 0);
	std::cout << bsp(a, b, c, p) << std::endl;
	return 0;
}
