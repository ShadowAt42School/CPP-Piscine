/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:04:08 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 19:38:40 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cmath>
/**
* Cannonical based on http://www.informit.com/articles/article.aspx?p=2126573&seqNum=8
* On PDF task structure
* Online community
* Outlines and Guides (majority)
* Privates come on top then public
*/


class Fixed {
private:
	int val;
	static const int fract = 8;

public:
	Fixed ();
	Fixed (int const val);
	Fixed (float const val);
	Fixed (Fixed const & src);

	virtual ~Fixed (void);

	Fixed & operator=(Fixed const & rhs);
	Fixed & operator<<(Fixed const & rhs);
	int getVal() const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt() const;
};

std::ostream & operator<<(std::ostream& o, Fixed const & fixed);
