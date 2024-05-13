/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:48:38 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/13 16:20:10 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

/*CONSTRUCTORS AND DESTRUCTORS*/

//Default Constructor

Fixed::Fixed()
{
    std::cout << BOLD << "Default" << RESET << " constructor called" << \
    std::endl;
    this->number = 0;
}

//Default destructor

Fixed::~Fixed()
{
    std::cout << BOLD << "Destructor" << RESET << " called" << \
    std::endl;
}

//Copy constructor

Fixed::Fixed(const Fixed& aFixed)
{
    std::cout << BOLD << "Copy" << RESET << " constructor called" << \
    std::endl;
    this->number = aFixed.number;
}

//Copy assigneent operator

Fixed& Fixed::operator=(const Fixed& aFixed)
{
    std::cout << BOLD << "Copy assignement operator" << RESET << " called" << \
    std::endl;
    if (this != &aFixed)
    {
        this->number = aFixed.number;
    }
    return (*this);
}

/*PUBLIC METHODS*/

int Fixed::getRawBits(void)const
{
    std::cout << BOLD << "getRawBits" << RESET << " member function called" << \
    std::endl;
    return(this->number);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << BOLD << "setRawBits" << RESET << " member function called" << \
    std::endl; 
    this->number = raw; 
}