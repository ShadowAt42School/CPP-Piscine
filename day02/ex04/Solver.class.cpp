/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Solver.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:04:28 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 22:40:32 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Solver.class.hpp"

Solver::Solver() {
	this->valstackl = 0;
	this->operandsl = 0;
	return;
}
Solver::Solver(std::string line) {
	this->line = line;
	this->valstackl = 0;
	this->operandsl = 0;
	std::memset(this->operands, '0', 20);
}
Solver::Solver(Solver const & src) {
	*this = src;
	return;
}
Solver & Solver::operator=(std::string line) {
	this->line = line;
	return *this;
}
Solver::~Solver() {}

void Solver::setLine(std::string line) {
	this->line = line;
	return;
}

std::string Solver::getLine(void) {
	return this->line;
}

Fixed & Solver::getResult(void) {
	this->parseLine();
	return this->result;
}

void Solver::parseLine() {
	std::string &line = this->line;
	for (size_t i = 0; i < line.length(); i++) {
		if (line[i] == ' ') {
			continue;
		}
		else if (line[i] == '(') {
			this->operands[this->operandsl] = line[i];
			this->operandsl++;
		}
		else if (isdigit(line[i])) {
			char const *line_c = line.c_str();
			float num = std::atof(line_c + i );
			this->valstack[this->valstackl].setBits(num);
			this->valstackl++;
			while(i < line.length()) {
				if (isdigit(line[i])) {
					i++;
					continue;
				}
				if (line[i] == '.') {
					i++;
					continue;
				}
				break;
			}
		}
		else if (line[i] == ')') {
			while (this->operandsl > 0 && this->operands[this->operandsl - 1] != '(') {
				char op = this->operands[--this->operandsl];
				Fixed &val2 = this->valstack[--this->valstackl];
				Fixed &val1 = this->valstack[this->valstackl - 1];
				val1 = this->applyOp(val1, val2, op);
			}
			this->operandsl--;
		}
		else {
			while (
				this->operandsl > 0 &&
				this->isPresed(this->operands[this->operandsl - 1]) >= this->isPresed(line[i])
			) {
				char op = this->operands[--this->operandsl];
				Fixed &val2 = this->valstack[--this->valstackl];
				Fixed &val1 = this->valstack[this->valstackl - 1];
				val1 = this->applyOp(val1, val2, op);
			}
			this->operands[this->operandsl] = line[i];
			this->operandsl++;
		}
	}

	while (this->operandsl != 0) {
		char op = this->operands[--this->operandsl];
		Fixed &val2 = this->valstack[--this->valstackl];
		Fixed &val1 = this->valstack[this->valstackl - 1];
		val1 = this->applyOp(val1, val2, op);
	}

	this->result = this->valstack[0];
}

int Solver::isPresed(char op) {
	if(op == '+' || op == '-')
	    return 1;
    if(op == '*' ||op == '/')
	    return 2;
    return 0;
}

Fixed &Solver::applyOp(Fixed &a, Fixed &b, char op) {
    switch(op){
        case '+':
			a = a + b;
			break;
        case '-':
			a =  a - b;
			break;
        case '*':
			a =  a * b;
			break;
        case '/':
			a =  a / b;
			break;
    }
	return a;
}
