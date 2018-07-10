/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:28:24 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 19:51:48 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

void ponyOnTheHeap(std::string);
void ponyOnTheStack(std::string);
class Pony {
private:
	/* data */

public:
	Pony (std::string greeting);
	~Pony ();
};
