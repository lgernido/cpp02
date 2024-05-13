/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:48:38 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/13 16:10:22 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*CONSTRUCTORS AND DESTRUCTORS*/

//Default Constructor

Fixed::Fixed()
{
    std::cout << BOLD << "Fixed" << RESET << " constructor called" << \
    std::endl;
    this->number = 0;
}

//Default destructor

Fixed::~Fixed()
{
    std::cout << BOLD << "Fixed" << RESET << " destructor called" << \
    std::endl;
}

//Copy constructor

Fixed::Fixed(const Fixed& aFixed)
{
    number = *aFixed.number;
}

//Copy assigneent operator

Fixed& Fixed::operator=(const Fixed& aFixed)
{
    if (this != &aFixed)
    {
        *number = *aFixed.number;
    }
    return (*this);
}

/*PUBLIC METHODS*/

int Fixed::getRawBits(void)const
{
    return(this->number);
}

void Fixed::setRawBits(int const raw)
{
   this->number = raw; 
}