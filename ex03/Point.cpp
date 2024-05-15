/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:23:51 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 14:02:15 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default constructor

Point::Point() : x(0), y(0)
{
}

//Default destructor
Point::~Point()
{
}

//Copy constructor
Point::Point(const Point& aPoint) : x(aPoint.getX()), y(aPoint.getY())
{
}

//Other constructor
Point::Point(const float x, const float y) : x(x), y(y)
{
}

/*OPERATOR OVERLOAD*/

const Point& Point::operator=(const Point& aPoint) const
{
    if (this == &aPoint)
        return *this; 
    (Fixed)x = aPoint.getX();
    (Fixed)y = aPoint.getY(); 
    return *this;
}

/*PUBLIC METHODS*/

//Getters
float Point::getX(void) const
{
    return this->x.toFloat();
}

float Point::getY(void) const
{
    return this->y.toFloat();
}
