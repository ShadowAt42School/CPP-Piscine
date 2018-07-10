/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:34:37 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/25 20:50:22 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# define ENTRIES 8
#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

void	print_search(PhoneBook &phonebook);
void	print_entry(PhoneBook &phonebook, int index);

#endif
