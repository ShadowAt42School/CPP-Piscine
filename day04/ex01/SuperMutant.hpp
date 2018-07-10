/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:15:27 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:25:18 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
private:


public:
	SuperMutant ();
	SuperMutant (SuperMutant const & src);
	virtual ~SuperMutant ();

	SuperMutant & operator=(SuperMutant const & rhs);

	void takeDamage(int);
};

#endif
