/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 19:14:13 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/04 20:45:24 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

void castChar(std::string s) {
	char res;
	std::cout << "char: ";
	try {
		res = static_cast<char>(std::stoi(s));
		if (res > 32 && res < 127)
			std::cout << "'" << res << "'\n";
		else
			std::cout << "Non displayable" << '\n';
	} catch (const std::exception &e) {
		std::cout << "impossible" << '\n';
	}
}
void castInt(std::string s) {
	int res;
	std::cout << "int: ";
	try {
		res = static_cast<int>(std::stoi(s));
		std::cout << res << "\n";
	} catch (const std::exception &e) {
		std::cout << "impossible" << '\n';
	}
}
void castFloat(std::string s) {
	float res;
	std::cout << "float: ";
	try {
		res = static_cast<float>(std::stof(s));
		std::cout << res << "f\n";
	} catch (const std::exception &e) {
		std::cout << "impossible" << '\n';
	}
}
void castDouble(std::string s) {
	double res;
	std::cout << "double: ";
	try {
		res = static_cast<double>(std::stof(s));
		std::cout << res << "\n";
	} catch (const std::exception &e) {
		std::cout << "impossible" << '\n';
	}
}

int main(int argc, char const *argv[]) {
	if (argc == 1)
		return 0;
	argc--;
	argv++;
	std::string s = std::string(*argv);
	std::cout << std::fixed << std::setprecision(1);
	castChar(s);
	castInt(s);
	castFloat(s);
	castDouble(s);
	return 0;
}
