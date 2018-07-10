/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:50:23 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/05 23:24:01 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Array.hpp"

template <typename T>
void
printArray(Array<T> a, bool error)
{
	try
	{
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << "Array[" << i << "] Content: " << a[i] << std::endl;
		if (error)
			std::cout << "Array[" << a.size() << "] Content: " << a[a.size()];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void
testStrings()
{
	Array<std::string> arr(10);
	std::cout << "Testing string" << std::endl;

	for (int i = 0; i < 10; i++)
		arr[i] = std::to_string(rand() % 1000);
	Array<std::string> arr2(arr);
	for (int i = 0; i < 10; i++)
		arr2[i] += "_suffix";
	printArray(arr, false);
	std::cout << std::endl;
	printArray(arr2, false);
}

void
testInt()
{
	Array<int> arr(10);
	Array<int> arr1 = arr;
	std::cout << "Testing int" << std::endl;

	for (int i = 0; i < 10; i++)
		arr[i] =rand() % 1000;
	Array<int> arr2 = arr;
	Array<int> arr3(arr);
	for (int i = 0; i < 10; i++)
		arr3[i]++;
	printArray(arr, false);
	std::cout << '\n';
	printArray(arr1, false);
	std::cout << '\n';
	printArray(arr2, false);
	std::cout << '\n';
	printArray(arr3, false);
	std::cout << '\n';
	std::cout << "Trying to access over size" << std::endl;
	printArray(arr, true);
}

int
main(void)
{
	srand(time(0));
	try
	{
		std::cout << "Creating an empty array. Access operator should give an exception"\
			<< std::endl;
		Array<int> test2;
		test2[1];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	testStrings();
	testInt();

	return (0);
}
