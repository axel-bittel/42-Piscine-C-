/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:57:51 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 23:12:59 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(), y()
{}
Point::Point(float x_arg, float y_arg) : x(x_arg), y(y_arg)
{}
Point::Point(Point &pts) : x(pts.x), y(pts.y)
{}
Point::~Point()
{}
Point	Point::operator=(Point &pts)
{
	(void)pts;
	return (*this);
}
float Point::get_x() const
{
	return (this->x.toFloat());
}
float Point::get_y() const
{
	return (this->y.toFloat());
}
