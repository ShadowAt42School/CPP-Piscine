/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:24:13 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 20:05:17 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void) {
	Logger logger("logger.log");

	logger.log("logToConsole", "Console message in error stream");
	logger.log("logToFile", "File message in logger.log");
	return 0;
}
