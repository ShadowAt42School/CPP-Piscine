/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reading.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:40:12 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 18:24:58 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>

class Reading {
private:
	std::string filename;
	std::fstream processor;
	std::fstream newfile;
	std::string orig;
	std::string repl;
	std::string buffer;
	bool filePrepare();
	bool reader();
	bool writer();
	void replacer();

public:
	Reading ();
	Reading (std::string file);
	Reading (std::string file, std::string s1, std::string s2);

	bool setFileStream(std::string file);
	bool setReplacy(std::string replacy);
	bool setReplacer(std::string replacer);
	bool worker();

	virtual ~Reading ();
};
