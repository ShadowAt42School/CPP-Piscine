/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 19:50:42 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 21:34:49 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string text = "HI THIS IS BRAIN";
	std::string *ptext = &text;
	std::string &pctext = text;

	std::cout << "String original " << text << '\n';
	std::cout << "String pointer " << *ptext << '\n';
	std::cout << "String refference " << pctext << '\n';

	pctext = "THIS IS CHANGED BRAIN";
	std::cout << '\n';
	std::cout << "String original " << text << '\n';
	std::cout << "String pointer " << *ptext << '\n';
	std::cout << "String refference " << pctext << '\n';

	return 0;
}
