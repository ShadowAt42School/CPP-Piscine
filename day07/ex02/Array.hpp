/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:46:02 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/05 22:57:45 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYH
# define ARRAYH
#include <stdexcept>

template <typename T> class Array
{
	private:
		T				*array;
		unsigned int	n;

	public:

		Array<T>(void) : array(new T()), n(0) { }

		Array<T>(unsigned int n) :	array(new T[n]), n(n) { }

		Array<T>(Array<T> const &r) {	*this = r;	}

		~Array<T>(void) { }

		Array<T> &operator=(Array const &rhs)
		{
			this->n = rhs.n;
			this->array = new T[this->n];
			for (unsigned int i = 0; i < this->n; i++)
				this->array[i] = (rhs.array[i]);
			return (*this);
		}

		T &operator[] (unsigned int n)
		{
			if (n >= this->n)
				throw std::out_of_range ("Array out of range");
			return (array[n]);
		}

		unsigned int size() const
		{
			return (n);
		}


};

#endif
