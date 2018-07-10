/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 17:21:00 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 17:22:17 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Reading.class.hpp"

int main(int argc, char const *argv[]) {
	if (argc == 1)
		return 0;
	argc--;
	argv++;
	Reading reading(argv[0], argv[1], argv[2]);
	reading.worker();
	return 0;
}
