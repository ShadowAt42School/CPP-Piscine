/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:04:08 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 14:50:25 by maghayev         ###   ########.fr       */
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
	/**
	* Comparison
	*/
	bool operator>(Fixed const &rhs);
	bool operator<(Fixed const &rhs);
	bool operator>=(Fixed const &rhs);
	bool operator<=(Fixed const &rhs);
	bool operator==(Fixed const &rhs);
	bool operator!=(Fixed const &rhs);
	/**
	* Math
	*/
	Fixed &operator+(Fixed const & rhs);
	Fixed &operator-(Fixed const & rhs);
	Fixed &operator/(Fixed const & rhs);
	Fixed &operator*(Fixed const & rhs);
	/**
	* Math and Equal
	*/
	Fixed &operator+=(Fixed const & rhs);
	Fixed &operator-=(Fixed const & rhs);
	Fixed &operator*=(Fixed const & rhs);
	Fixed &operator/=(Fixed const & rhs);
	/**
	* Increments
	*/
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	/**
	* Operational Functions
	*/
	int getVal() const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	void setBits(const int raw);
	void setBits(const float raw);
	float toFloat( void ) const;
	int toInt() const;

	/**
	* min and max
	*/
	static const Fixed & min(Fixed const & a, Fixed const & b);
	static int const & min(int const & a, int const & b);
	static const Fixed & max(Fixed const & a, Fixed const & b);
	static int const & max(int const & a, int const & b);
};

std::ostream & operator<<(std::ostream& o, Fixed const & fixed);
