/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IBoundingBox.interface.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:30:28 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 19:47:48 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IBOUNDINGBOX_INTERFACE_HPP
# define IBOUNDINGBOX_INTERFACE_HPP

#include "BoundingBox.class.hpp"

class IBoundingBox : public BoundingBox {

public:
	IBoundingBox(WINDOW *win) : BoundingBox(win) {}
	virtual ~IBoundingBox () {};
	virtual void draw(int) = 0;
};

#endif
