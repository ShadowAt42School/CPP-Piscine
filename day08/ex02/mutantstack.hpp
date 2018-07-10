/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 19:25:11 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/06 19:38:56 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>() {}
		MutantStack<T>(MutantStack<T> const &src) : std::stack<T>(src) {}
		~MutantStack<T>() {}
		MutantStack & operator=(MutantStack<T> const & rhs) {
			return (std::stack<T>::operator=(rhs));
		}

		typedef typename std::stack<T>::container_type::reverse_iterator iterator;

		iterator begin() {	return this->c.rbegin();	}
		iterator end() {	return this->c.rend();	}

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_iterator;

		const_iterator cbegin() {	return this->c.crbegin();	}
		const_iterator cend() {	return this->c.crend();	}
};

#endif
