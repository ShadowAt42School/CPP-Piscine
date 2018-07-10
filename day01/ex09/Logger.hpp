/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:24:16 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 19:45:45 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

class Logger
{
	typedef void (Logger::*Action)(std::string const & log);
	private:
		std::string logFile;
		std::fstream logging;
		void logToConsole(std::string const & log);
		void logToFile(std::string const & log);
		std::string makeLogEntry(std::string logmsg);
		bool filePrepare();

	public:
		Logger ();
		Logger (std::string log_file_name);
		bool setLogFile(std::string log_file_name);
		void log(std::string const & dest, std::string const & message);
		virtual ~Logger ();
};
