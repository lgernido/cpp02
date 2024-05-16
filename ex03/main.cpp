/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:23:26 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 08:59:38 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    {
        /*Point P inside the triangle*/
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
        /*Point P inside the triangle*/
        Point a(-4, 12);
        Point b(-7, -2.6);
        Point c(10.145, 14.8);
        Point p(1, 9.36);
        if (bsp(a, b, c, p) == true)
            std::cout << GREEN  << BOLD << "INSIDE" << RESET << std::endl;
        else
            std::cout << RED << BOLD << "OUTSIDE" << RESET << std::endl; 
    }
    {
        /*Point P outside the triangle*/
        Point a(5.4, -2.52);
        Point b(-7, -2.6);
        Point c(0.123, 3.69);
        Point p(6, 6);
        if (bsp(a, b, c, p) == true)
            std::cout << GREEN << BOLD << "INSIDE" << RESET << std::endl;
        else
            std::cout << RED << BOLD << "OUTSIDE" << RESET << std::endl;
    }
    {
        /*Point P on the summit*/
        Point a(3, 10);
        Point b(0, 14);
        Point c(1, 8);
        Point p(3, 10);
        if (bsp(a, b, c, p) == true)
            std::cout << GREEN << BOLD << "INSIDE" << RESET << std::endl;
        else
            std::cout << RED << BOLD << "OUTSIDE" << RESET << std::endl;
    }
}