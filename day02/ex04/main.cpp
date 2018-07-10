/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:03:41 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 22:30:52 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Solver.class.hpp"

int main(int argc, char const *argv[]) {
	if (argc == 1)
		return 0;
	argc--;
	argv++;
	float a = Solver(*argv).getResult().toFloat();
	std::cout << a << std::endl;
	return 0;
}
