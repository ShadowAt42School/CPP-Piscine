/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 22:22:10 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/06 14:18:58 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <typeinfo>
#include <iterator>
#include <stdexcept>
#include <algorithm>

template <typename T>
int easyfind(T container, int needle) {
	typename T::iterator location =
						std::find( container.begin(), container.end(), needle );
	if (location == container.end())
		throw std::overflow_error("No position found");
	return std::distance(container.begin(), location);
}
#endif
