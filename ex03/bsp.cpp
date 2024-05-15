/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:38:44 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 14:00:54 by lgernido         ###   ########.fr       */
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

    float areaABP = ((ax - x) * (by - y) - (ay - y) * (bx - x));
    float areaBCP = ((bx - x) * (cy - y) - (by - y) * (cx - x));
    float areaCAP = ((cx - x) * (ay - y) - (cy - y) * (ax - x));

    if (areaABP == 0 || areaBCP == 0 || areaCAP == 0)
        return false;

    return (areaABP > 0 && areaBCP > 0 && areaCAP > 0) || (areaABP < 0 && areaBCP < 0 && areaCAP < 0);
}