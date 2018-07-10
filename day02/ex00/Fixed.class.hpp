/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:04:08 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 22:47:24 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
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
	Fixed (Fixed const & src);
	virtual ~Fixed (void);
	Fixed & operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
