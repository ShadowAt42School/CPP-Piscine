/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:39:46 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 23:25:09 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRAL_HPP
# define CENTRAL_HPP

#include "OfficeBlock.hpp"

class CentralBureaucracy {
private:
	OfficeBlock block[20];
	std::string queue[100];
	int queueSpace;

public:
	CentralBureaucracy ();
	CentralBureaucracy (CentralBureaucracy const & src);
	virtual ~CentralBureaucracy ();

	int getQueueSpace() const;
	Intern * getBlockIntern(int) const;
	Bureaucrat * getBlockSigner(int) const;
	Bureaucrat * getBlockExecutor(int) const;

	void feedBureaucrat(Bureaucrat *);
	void queueUp(std::string);
	void doBureaucracy();

	CentralBureaucracy & operator=(CentralBureaucracy const & rhs);

	class NoSpaceForBureaucrat : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "NoSpaceForBureaucrat: All Bureaucrats took their positions. No need for new one. Rejected.\n";
			}
	};
	class QueueFull : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "QueueFull: Queue for ants is full. Gods will now proceed with processing.\n";
			}
	};
};

#endif
