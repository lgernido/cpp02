/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:48:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 14:28:00 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
    { 
        // Fixed a;
        // Fixed const b(Fixed(5.05f) * Fixed(2));
        
        // std::cout << a << std::endl;
        // std::cout << ++a << std::endl;
        // std::cout << a << std::endl;
        // std::cout << a++ << std::endl;
        // std::cout << a << std::endl;
        // std::cout << b << std::endl;
        // std::cout << Fixed::max( a, b ) << std::endl;
    }
    {
        Fixed a;                   // Default constructor
        Fixed b(10);               // Integer constructor
        Fixed c(3.14f);            // Float constructor
        Fixed d(b);                // Copy constructor

        // Testing copy assignement operator
        a = c;
        std::cout << "a: " << a << " (expected 3.14)" << std::endl;
        
        // Testing conversion methods
        float asFloat = a.toFloat();
        int asInt = a.toInt();

        std::cout << "asFloat: " << asFloat << ", asInt: " << asInt << std::endl;
        
        // Testing arithmetic operators
        Fixed sum = b + c;
        Fixed diff = b - c;
        Fixed prod = b * c;
        Fixed quot = b / c;

        // Testing incrementation operators 
        Fixed e;
        e = ++a; // Pré-incrémentation
        e = --a; // Pré-décrémentation
        e = a++; // Post-incrémentation
        e = a--; // Post-décrémentation

        // Testing comparing operators 
        bool gt = b > c;
        bool lt = b < c;
        bool ge = b >= c;
        bool le = b <= c;
        bool eq = b == c;
        bool ne = b != c;

        // Testing min and max fonctions
        Fixed min1 = Fixed::min(b, c);
        Fixed min2 = Fixed::min(a, b);
        Fixed max1 = Fixed::max(b, c);
        Fixed max2 = Fixed::max(a, b);

        // Displaying results
        std::cout << "b: " << b << "(expected 10), c: " << c << "(expected 3.14), d: " << d << " (expected 10)" << std::endl;
        std::cout << "sum: " << sum << "(expected 13.14), diff: " << diff << "(expected 6.86)" << std::endl;
        std::cout << "prod: " << prod << "(expected 31.4), quot: " << quot << "(expected 3.18)" << std::endl;
        std::cout << "gt: " << gt << "(expected 1), lt: " << lt << "(expected 0)" << std::endl;
        std::cout << "ge: " << ge << "(expected 1), le: " << le << "(expected 0)" << std::endl;
        std::cout << "eq: " << eq << "(expected 0), ne: " << ne << "(expected 1)" << std::endl;
        std::cout << "min1: " << min1 << " (expected 3.14), min2: " << min2 << " (expected 3.14)" << std::endl;
        std::cout << "max1: " << max1 << " (expected 10), max2: " << max2 << " (expected 10)" << std::endl;
    }  
    return 0;
}