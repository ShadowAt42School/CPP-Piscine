/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reading.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:53:35 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 18:25:28 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Reading.class.hpp"
#include <iostream>


Reading::Reading() {}
Reading::Reading(std::string file) {
	this->filename = file;
	if (!this->filePrepare())
		std::cout	<< "Porvided file could not be read: " << this->filename << '\n'
					<< "Please note, if you did not see message of destruction, object is still in alive\n"
					<< "you can use setFileStream function and provide path to working file.";
}
Reading::Reading(std::string file, std::string replacy, std::string replacer) {
	this->filename = file;
	if (!this->filePrepare())
		std::cout	<< "Porvided file could not be read: " << this->filename << '\n'
					<< "Please note, if you did not see message of destruction, object is still in alive\n"
					<< "you can use setFileStream function and provide path to working file.";
	this->orig = replacy;
	this->repl = replacer;
}

bool Reading::filePrepare() {
	this->processor.open(this->filename, std::fstream::in);
	if (this->processor.is_open()) {
		this->newfile.open(std::string(this->filename + ".replace"), std::fstream::out);
		return true;
	}
	return false;
}

bool Reading::setFileStream(std::string file) {
	this->filename = file;
	return this->filePrepare();
}
bool Reading::setReplacy(std::string replacy) {
	this->orig = replacy;
	return true;
}
bool Reading::setReplacer(std::string replacer) {
	this->repl = replacer;
	return true;
}

bool Reading::worker() {
	while (this->reader()) {
		if (!this->writer())
			return false;
	}
	return true;
}

bool Reading::reader() {
	if (this->processor.is_open() && getline(this->processor, this->buffer)) {
		this->buffer += "\n";
		return true;
	}
	return false;
}

bool Reading::writer() {
	this->replacer();
	this->newfile << this->buffer;
	return true;
}

void Reading::replacer() {
	size_t index = 0;
	while ((index = this->buffer.find(this->orig)) != std::string::npos) {
		this->buffer.replace(index, this->orig.length(), this->repl);
		std::cout << this->buffer << '\n';
		index += this->repl.length();
	}
}

Reading::~Reading() {
	if (this->processor.is_open())
		this->processor.close();
	if (this->newfile.is_open())
		this->newfile.close();
}
