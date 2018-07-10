/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Solver.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:04:26 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 22:12:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cctype>
#include "Fixed.class.hpp"

class Solver {

private:
	Fixed	valstack[20];
	char	operands[20];
	int valstackl;
	int operandsl;
	std::string	line;
	Fixed result;

	void parseLine();
	int isPresed(char op);
	Fixed &applyOp(Fixed &a, Fixed &b, char op);

public:
	Solver ();
	Solver (std::string line);
	Solver(Solver const & src);
	Solver & operator=(std::string line);
	virtual ~Solver ();

	void setLine(std::string);
	std::string getLine();

	Fixed &getResult();
};
