/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:23:26 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 14:22:26 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    {
        Point a(5.4, 7);
        Point b(-7, -2.6);
        Point c(10.145, 6.8);
        Point p(6, 6);
        if (bsp(a, b, c, p) == true)
            std::cout << GREEN << BOLD << "INSIDE" << RESET << std::endl;
        else
            std::cout << RED << BOLD << "OUTSIDE" << RESET << std::endl;
    }
    {
        Point a(5.4, 7);
        Point b(-7, -2.6);
        Point c(10.145, 6.8);
        Point p(-2, -14.36);
        if (bsp(a, b, c, p) == true)
            std::cout << GREEN  << BOLD << "INSIDE" << RESET << std::endl;
        else
            std::cout << RED << BOLD << "OUTSIDE" << RESET << std::endl; 
    }
    {
        Point a(5.4, -2.52);
        Point b(-7, -2.6);
        Point c(0.123, 3.69);
        Point p(6, 6);
        if (bsp(a, b, c, p) == true)
            std::cout << GREEN << BOLD << "INSIDE" << RESET << std::endl;
        else
            std::cout << RED << BOLD << "OUTSIDE" << RESET << std::endl;
    }
}