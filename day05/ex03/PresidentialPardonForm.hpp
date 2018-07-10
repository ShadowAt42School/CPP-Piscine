/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:14:33 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:10:51 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_HPP
# define PRESIDENT_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
	std::string target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm (std::string);
	PresidentialPardonForm (PresidentialPardonForm const & src);
	virtual ~PresidentialPardonForm ();

	std::string getTarget(void) const;

	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif
