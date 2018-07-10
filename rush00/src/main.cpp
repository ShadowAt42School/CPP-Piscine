/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 21:05:27 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 21:44:06 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.system.class.hpp"

int main() {
	WINDOW *winbig = initscr();
	noecho();
	cbreak();
	curs_set(0);
	std::srand(std::time(0));
	Game game(winbig);
	game.play();
	endwin();
	return 0;
}
