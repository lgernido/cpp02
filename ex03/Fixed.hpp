/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:48:39 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/15 16:09:55 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define ORANGE "\033[38;5;208m"
#define BLUE	"\033[0;34m"
#define MAGENTA	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define WHITE	"\033[0;37m"
#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"
#define RESET      "\033[0m"

class Fixed
{
    public :
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        ~Fixed();
        
        Fixed(const Fixed& aFixed);
        
        Fixed& operator=(const Fixed& aFixed);
        Fixed operator+(const Fixed& aFixed)const;
        Fixed operator-(const Fixed& aFixed)const;
        Fixed operator*(const Fixed& aFixed)const;
        Fixed operator/(const Fixed& aFixed)const;
        Fixed& operator++(void);
        Fixed& operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        bool operator>(const Fixed& aFixed) const;
        bool operator<(const Fixed& aFixed) const;
        bool operator>=(const Fixed& aFixed);
        bool operator<=(const Fixed& aFixed);
        bool operator==(const Fixed& aFixed);
        bool operator!=(const Fixed& aFixed);
        
        int getRawBits(void)const;
        void setRawBits(int const raw);
        
        float toFloat(void)const;
        int toInt(void)const;

        static Fixed min(Fixed& a, Fixed& b);
        static Fixed min(const Fixed& a, const Fixed& b);
        static Fixed max(Fixed& a, Fixed& b);
        static Fixed max(const Fixed& a, const Fixed &b);


    private : 
        int number;
        static const int bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& aFixed);

#endif