/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:38:02 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 22:40:15 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human {
private:
	const Brain brain;

public:
	Human ();
	const Brain &getBrain();
	std::string identify();
	virtual ~Human ();
};
