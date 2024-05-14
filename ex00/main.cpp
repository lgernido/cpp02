/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:48:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/14 10:05:28 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
    {
        Fixed a;
        Fixed b(a);
        Fixed c;
        
        c = b;
        
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
    }
    {
        // Fixed a;
        // Fixed b(a);
        // Fixed c;
        
        // c = b;
        // a.setRawBits(46);
        // std::cout << a.getRawBits() << std::endl;
        // std::cout << b.getRawBits() << std::endl;
        // std::cout << c.getRawBits() << std::endl;
    }
    {
        // Fixed a;
        // Fixed b(a);
        // Fixed c;
        
        // b.setRawBits(46);
        // c = b;
        // std::cout << a.getRawBits() << std::endl;
        // std::cout << b.getRawBits() << std::endl;
        // std::cout << c.getRawBits() << std::endl;
    }
    return (0);
}