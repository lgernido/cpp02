/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:48:38 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 13:44:43 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*CONSTRUCTORS AND DESTRUCTORS*/

//Default Constructor

Fixed::Fixed()
{
    // std::cout << BOLD << "Default constructor" << RESET << " called" << \
    // std::endl;
    this->number = 0;
}

Fixed::Fixed(const int number)
{
    // std::cout << "Int constructor called" << std::endl;
    this->number = number * static_cast<int>(pow(2, this->bits));
}

Fixed::Fixed(const float number)
{
    // std::cout << "Float constructer called" << std::endl;
    this->number = roundf(number * pow(2, this->bits));
}

//Default destructor

Fixed::~Fixed()
{
    // std::cout << BOLD << "Destructor" << RESET << " called" << \
    // std::endl;
}

//Copy constructor

Fixed::Fixed(const Fixed& aFixed)
{
    // std::cout << BOLD << "Copy" << RESET << " constructor called" << \
    // std::endl;
    this->number = aFixed.getRawBits();
}


/*PUBLIC METHODS*/

int Fixed::getRawBits(void)const
{
    // std::cout << BOLD << "getRawBits" << RESET << " member function called" << \
    // std::endl;
    return(this->number);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << BOLD << "setRawBits" << RESET << " member function called" << \
    // std::endl; 
    this->number = raw; 
}

float Fixed::toFloat(void)const
{
    return (this->number / pow(2, this->bits));
}

int Fixed::toInt(void)const
{
    return number >> bits;
}

/*OPERATOR OVERLOADING*/

std::ostream& operator<<(std::ostream& os, const Fixed& aFixed)
{
    os << aFixed.toFloat();
    return os;
}

//Copy assignement operator

Fixed& Fixed::operator=(const Fixed& aFixed)
{
    if (this == &aFixed)
        return *this; 
    
    this->number = aFixed.getRawBits(); 
    return *this;
}

Fixed Fixed::operator+(const Fixed& aFixed) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() + aFixed.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed& aFixed) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() - aFixed.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed& aFixed) const
{
    Fixed result;
    result.setRawBits((this->getRawBits() * aFixed.getRawBits()) >> bits);
    return result;
}

Fixed Fixed::operator/(const Fixed& aFixed) const
{
    Fixed result;
    result.setRawBits((this->getRawBits() << bits) / aFixed.getRawBits());
    return result;
}

Fixed& Fixed::operator++(void)
{
    this->number += 1;
    return (*this);
}

Fixed& Fixed::operator--(void)
{
    this->number -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->number += 1;
    return(tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->number -= 1;
    return(tmp);
}

bool Fixed::operator>(const Fixed& aFixed) const
{
    return(this->number>aFixed.getRawBits()) ? true : false;
}

bool Fixed::operator<(const Fixed& aFixed) const
{
    return(this->number<aFixed.getRawBits()) ? true : false;
}

bool Fixed::operator>=(const Fixed& aFixed)
{
    return(this->number>=aFixed.getRawBits()) ? true : false;
}

bool Fixed::operator<=(const Fixed& aFixed)
{
    return(this->number<=aFixed.getRawBits()) ? true : false;
}

bool Fixed::operator==(const Fixed& aFixed)
{
    return(this->number==aFixed.getRawBits()) ? true : false;
}

bool Fixed::operator!=(const Fixed& aFixed)
{
    return(this->number!=aFixed.getRawBits()) ? true : false;
}

/*STATIC FUNCTIONS*/

Fixed Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;    
}

Fixed Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

Fixed Fixed::max(const Fixed&a, const Fixed& b)
{
    return (a > b) ? a : b;
}