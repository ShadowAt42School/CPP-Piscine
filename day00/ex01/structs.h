/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:52:43 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/25 19:34:43 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H
#include <string>
#include <cstring>

typedef struct	s_search {
	int			index;
	std::string fname;
	std::string lname;
	std::string nickname;
}				t_search;

typedef struct	s_nentry {
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string login;
	std::string pstaddr;
	std::string email;
	std::string phnumber;
	std::string bday;
	std::string fmeal;
	std::string undcover;
	std::string secret;
}				t_nentry;
#endif
