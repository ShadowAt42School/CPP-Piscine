/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:21:57 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:15:52 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_HPP
# define ROBOT_HPP

#include "Form.hpp"
#include <cstdlib>
class RobotomyRequestForm : public Form{
private:
	std::string target;
	RobotomyRequestForm();

public:
	RobotomyRequestForm (std::string);
	RobotomyRequestForm (RobotomyRequestForm const & src);
	virtual ~RobotomyRequestForm ();

	std::string getTarget(void) const;

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif
