/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:58:04 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 23:11:59 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
#define Point_HPP
#include "Fixed.hpp"
class	Point
{
	public:
		Point();
		Point(float x_arg, float y_arg);
		Point(Point &pts);
		~Point();
		Point	operator=(Point &pts);
		float get_x() const;
		float get_y() const;
	private:
		Fixed const x;
		Fixed const y;
};
#endif
