/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:38:44 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 08:48:29 by lgernido         ###   ########.fr       */
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
    float px = point.getX();
    float py = point.getY();

    if ((px == ax && py == ay) || (px == bx && py == by) || (px == cx && py == cy))
        return false;

    float triangleABP = ((ax - px) * (by - py) - (ay - py) * (bx - px));
    float triangleBCP = ((bx - px) * (cy - py) - (by - py) * (cx - px));
    float triangleCAP = ((cx - px) * (ay - py) - (cy - py) * (ax - px));

    if (triangleABP == 0 || triangleBCP == 0 || triangleCAP == 0)
        return false;

    return (triangleABP > 0 && triangleBCP > 0 && triangleCAP > 0) || (triangleABP < 0 && triangleBCP < 0 && triangleCAP < 0);
}