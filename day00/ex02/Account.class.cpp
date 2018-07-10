/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 23:18:58 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 14:04:13 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << initial_deposit << ";"
				<< "created\n";
}

void Account::makeDeposit(int deposit) {
	this->_amount += deposit;
	this->_nbDeposits += 1;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount - deposit << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_deposits:" << this->_nbDeposits << "\n";
	if (deposit > 0) {
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits += 1;
	}
}

bool Account::makeWithdrawal(int withdrawal) {
	if (this->_amount - withdrawal < 0) {
		Account::_displayTimestamp();
		std::cout	<< "index:" << this->_accountIndex << ";"
					<< "p_amount:" << this->_amount << ";"
					<< "withdrawal:" << "refused;\n";
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount + withdrawal << ";"
				<< "withdrawal:" << withdrawal << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_deposits:" << this->_nbDeposits << "\n";
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	return true;
}

int Account::checkAmount(void) const {
	std::cout << "Entered Check Ammount" << '\n';
	return this->_amount;
}

void Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbDeposits << "\n";
}

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}
int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}
int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::getNbAccounts() << ";"
				<< "total:" << Account::getTotalAmount() << ";"
				<< "deposits:" << Account::getNbDeposits() << ";"
				<< "withdrawals:" << Account::getNbWithdrawals() << "\n";
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed\n";
}

void Account::_displayTimestamp( void ) {
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout	<< "["
				<< (ltm->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') << ltm->tm_mon
				<< std::setw(2) << std::setfill('0') << ltm->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << ltm->tm_hour
				<< std::setw(2) << std::setfill('0') << ltm->tm_min
				<< std::setw(2) << std::setfill('0') << ltm->tm_sec
				<<  "] ";
}
