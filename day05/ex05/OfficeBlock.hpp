/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:22:23 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 23:19:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_HPP
# define OFFICE_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
private:
	Intern * intern;
	Bureaucrat * bureaucratSign;
	Bureaucrat * bureaucratExec;
	OfficeBlock (OfficeBlock const &);
	OfficeBlock & operator=(OfficeBlock const &);

public:
	OfficeBlock ();
	OfficeBlock (Intern*, Bureaucrat*, Bureaucrat*);
	virtual ~OfficeBlock ();

	void setIntern(Intern*);
	void setSigner(Bureaucrat*);
	void setExecutor(Bureaucrat*);
	Intern* getIntern() const;
	Bureaucrat * getSigner() const;
	Bureaucrat * getExecutor() const;

	void doBureaucracy(std::string, std::string);

	class MissingIntern : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "MissingIntern: Intern is missing.\n";
			}
	};
	class MissingBureaucrat : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "MissingBureaucrat: Missing Bureaucrat.\n";
			}
	};

};

#endif
