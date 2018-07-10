/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 20:48:23 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/04 21:06:20 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include <iostream>

void	*serialize()
{
	int		i;
	char	*data = new char[20];

	for (i = 0; i < 8; i++)
		data[i] = ALPHANUM[rand() % 62];
	for (i = 8; i < 12; i++)
		data[i] = rand() % 256;
	for (i = 12; i < 20; i++)
		data[i] = ALPHANUM[rand() % 62];
	return (reinterpret_cast<void*>(data));
}

Data	*deserialize(void *ptr)
{
	Data	*data = new Data;
	const char	*input = reinterpret_cast<char*>(ptr);
	data->s1 = std::string(input, 0, 8);
	data->n = input[8];
	data->s2 = std::string(input, 12, 8);
	return (data);
}

int		main(void)
{
	srand(time(NULL));

	void	*ser = serialize();
	std::cout << "Memory address: " << ser << std::endl;
	std::cout << "Text serialized:" << reinterpret_cast<char*> (ser) << '\n';
	Data	*des = deserialize(ser);
	std::cout << "Deserialized:" << std::endl;
	std::cout << des->s1 << std::endl;
	std::cout << des->n << std::endl;
	std::cout << des->s2 << std::endl;
	return (0);
}
