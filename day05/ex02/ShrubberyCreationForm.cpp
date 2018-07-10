/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:02:23 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:16:14 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form ("ShrubberyCreationForm", 145, 137) {
	this->target = target;
	return;
}
ShrubberyCreationForm::ShrubberyCreationForm (ShrubberyCreationForm const & src) : Form ("ShrubberyCreationForm", 145, 137) {
	*this = src;
	return;
}
ShrubberyCreationForm::~ShrubberyCreationForm () {
}

std::string ShrubberyCreationForm::getTarget(void) const {	return this->target;	}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if (this != &rhs)
		this->target = rhs.getTarget();
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
		throw ShrubberyCreationForm::FormSignatureRequired();
	if (executor.getGrade() > this->getReqExecGrade())
		throw ShrubberyCreationForm::GradeTooLowException();
	std::ofstream file;
	file.open(std::string(this->target + "_shrubbery.tree").c_str());

	file << "             _{\\ _{\\{\\/}/}/}__\n";
	file << "             {/{/\\}{/{/\\}(\\}{/\\} _\n";
	file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
	file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n";
	file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n";
	file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
	file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n";
	file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n";
	file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
	file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n";
	file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n";
	file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
	file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n";
	file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n";
	file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
	file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n";
	file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n";
	file << "      		   {){/ {\\/}{\\/} \\}\\}\n";
	file << "              (_)  \\.-'.-/\n";
	file << "          __...--- |'-.-'| --...__\n";
	file << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n";
	file << " -\"    ' .  . '    |.'-._| '  . .  '   jro\n";
	file << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
	file << "          ' ..     |'-_.-|\n";
	file << "  .  '  .       _.-|-._ -|-._  .  '  .\n";
	file << "              .'   |'- .-|   '.\n";
	file << "  ..-'   ' .  '.   `-._.-´   .'  '  - .\n";
	file << "   .-' '        '-._______.-'     '  .\n";
	file << "        .      ~,\n";
	file << "    .       .   |\\   .    ' '-.\n";
	file << "    ___________/  \\____________\n";
	file << "   /  Why is it, when you want \\\n";
	file << "  |  something, it is so damn   |\n";
	file << "  |    much work to get it?     |\n";
	file << "   \\___________________________/\n";
	file.close();
	return;
}
