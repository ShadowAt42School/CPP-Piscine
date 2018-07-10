/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:24:15 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 20:11:57 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger() {}
Logger::Logger(std::string log_file_name) {
	this->logFile = log_file_name;
	if (!this->filePrepare())
		std::cout	<< "Error happened in creating file." << '\n'
					<< "Please supply new file name.";
}

bool Logger::filePrepare() {
	this->logging.open(this->logFile, std::fstream::app);
	if (this->logging.is_open())
		return true;
	return false;
}

bool Logger::setLogFile(std::string log_file_name) {
	this->logFile = log_file_name;
	return this->filePrepare();
}

void Logger::log(std::string const & dest, std::string const & message) {
	static Action actions[2] = {
		&Logger::logToConsole,
		&Logger::logToFile
	};
	static std::string actionStr[2] = {
		"logToConsole",
		"logToFile"
	};
	for (size_t i = 0; i < 2; i++)
		if (!actionStr[i].compare(dest))
			(this->*(actions[i]))(message);
	return;
}

void Logger::logToConsole(const std::string &log) {
	std::cerr << this->makeLogEntry(log);
	return;
}

void Logger::logToFile(const std::string &log) {
	if (!this->logging.is_open()) {
		std::cout << "Provide log file." << '\n';
		this->logToConsole(log);
		return;
	}
	this->logging << this->makeLogEntry(log);
	return;
}

std::string Logger::makeLogEntry(std::string logmsg) {
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::string prepared;

	prepared += "[";
	prepared += "Year " + std::to_string(ltm->tm_year + 1900) + " ";
	prepared += "Month " + std::to_string(ltm->tm_mon) + " ";
	prepared += "Day " + std::to_string(ltm->tm_mday) + " ";
	prepared += " ";
	prepared += std::to_string(ltm->tm_hour);
	prepared += ":";
	prepared += std::to_string(ltm->tm_min);
	prepared += ":";
	prepared += std::to_string(ltm->tm_sec);
	prepared += "] ";
	prepared += logmsg + "\n";
	return prepared;
}

Logger::~Logger() {
	if (this->logging.is_open())
		this->logging.close();
}
