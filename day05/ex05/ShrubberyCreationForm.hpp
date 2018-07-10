/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:22:30 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:10:45 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
private:
	std::string target;
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm (std::string);
	ShrubberyCreationForm (ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm ();

	std::string getTarget(void) const;

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif
