/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:48:39 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/13 16:18:32 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
        ~Fixed();
        Fixed(const Fixed& aFixed);
        Fixed& operator=(const Fixed& aFixed);
        int getRawBits(void)const;
        void setRawBits(int const raw);

    private : 
        int number;
        static const int bits;
};