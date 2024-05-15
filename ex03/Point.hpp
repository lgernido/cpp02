/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:24:40 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 13:58:14 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

class Point
{
    public :
        Point();
        ~Point(); 
        Point(const float x, const float y);
        
        Point(const Point& aPoint);

        const Point& operator=(const Point& aPoint) const;
        
        float getX(void)const;
        float getY(void)const;

    private :
        const Fixed x;
        const Fixed y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);