/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:26:38 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/06 17:36:07 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iterator>
#include <limits.h>
#include <iostream>
#include <algorithm>

class Span {
	private:
		std::vector<int> container;
		unsigned int count;
		Span();

	public:
		Span (int);
		Span (Span const &);
		virtual ~Span ();

		std::vector<int> &getContainer();
		unsigned int getCount() const;

		Span & operator=(Span const &);

		void addNumber(int);
		int shortestSpan(void);
		int longestSpan(void);
		class OverflowElementsException {
			private:
				OverflowElementsException & operator=(OverflowElementsException const &);
			public:
				OverflowElementsException ();
				OverflowElementsException (OverflowElementsException const &);
				virtual ~OverflowElementsException ();
				const char* what();
		};
		class UnderSizeException {
			private:
				UnderSizeException & operator=(UnderSizeException const &);
			public:
				UnderSizeException ();
				UnderSizeException (UnderSizeException const &);
				virtual ~UnderSizeException ();
				const char* what();
		};
};

std::ostream & operator<< (std::ostream &, Span &);

#endif
