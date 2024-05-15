/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:38:44 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 14:41:42 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float ax = a.getX();    
    float ay = a.getY();
    float bx = b.getX();
    float by = b.getY();
    float cx = c.getX();
    float cy = c.getY();
    float x = point.getX();
    float y = point.getY();

    if ((x == ax && y == ay) || (x == bx && y == by) || (x == cx && y == cy))
        return false;

    float triangleABP = ((ax - x) * (by - y) - (ay - y) * (bx - x));
    float triangleBCP = ((bx - x) * (cy - y) - (by - y) * (cx - x));
    float triangleCAP = ((cx - x) * (ay - y) - (cy - y) * (ax - x));

    if (triangleABP == 0 || triangleBCP == 0 || triangleCAP == 0)
        return false;

    return (triangleABP > 0 && triangleBCP > 0 && triangleCAP > 0) || (triangleABP < 0 && triangleBCP < 0 && triangleCAP < 0);
}