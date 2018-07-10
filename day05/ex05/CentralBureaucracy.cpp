/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:39:48 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 23:25:28 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() {
	for (size_t i = 0; i < 20; i++)
		this->block[i].setIntern(new Intern());
	this->queueSpace = 0;
}
CentralBureaucracy::CentralBureaucracy (CentralBureaucracy const & src) {
	*this = src;
	return;
}
CentralBureaucracy::~CentralBureaucracy () {
	for (size_t i = 0; i < 20; i++) {
		delete this->block[i].getIntern();
		if (!this->block[i].getSigner())
			delete this->block[i].getSigner();
		if (!this->block[i].getExecutor())
			delete this->block[i].getExecutor();
	}
}

CentralBureaucracy & CentralBureaucracy::operator=(CentralBureaucracy const & rhs) {
	if (this != &rhs) {
		for (size_t i = 0; i < 20; i++) {
			this->block[i].setIntern(rhs.getBlockIntern(i));
			this->block[i].setSigner(rhs.getBlockSigner(i));
			this->block[i].setExecutor(rhs.getBlockExecutor(i));
		}
	}
	return *this;
}

Intern * CentralBureaucracy::getBlockIntern(int index) const { return this->block[index].getIntern(); }
Bureaucrat * CentralBureaucracy::getBlockSigner(int index) const { return this->block[index].getSigner(); }
Bureaucrat * CentralBureaucracy::getBlockExecutor(int index) const { return this->block[index].getExecutor(); }

int CentralBureaucracy::getQueueSpace() const { return this->queueSpace; }

void CentralBureaucracy::feedBureaucrat(Bureaucrat * bureaucrat) {
	for (size_t i = 0; i < 20; i++) {
		if (!this->block[i].getSigner()) {
			this->block[i].setSigner(bureaucrat);
			return;
		}
		else if (!this->block[i].getExecutor()) {
			this->block[i].setExecutor(bureaucrat);
			return ;
		}
	}
	throw CentralBureaucracy::NoSpaceForBureaucrat();
}
void CentralBureaucracy::queueUp(std::string name) {
	if (this->queueSpace >= 100)
		throw CentralBureaucracy::QueueFull();
	this->queue[this->queueSpace] = name;
}
void CentralBureaucracy::doBureaucracy() {
	static std::string formsStr[3] = {
		"ShrubberyCreationForm",
		"PresidentialPardonForm",
		"RobotomyRequestForm"
	};
	for (size_t i = 0; i < 100; i++) {
		for (size_t g = 0; g < 20; g++) {
			try {
				this->block[g].doBureaucracy(formsStr[rand() % 4], this->queue[i++]);
			} catch (std::exception & e) {
				std::cout << "Error occured in Burrucracy...\n" << e.what() << '\n';
			}
		}
	}
}
