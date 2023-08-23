/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:38:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 12:13:55 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

/* Constructors & Destructors */

/* Public */

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}


/* Member Functions */

/* Public */

void	Harl::complain(std::string level)
{
	int			i;
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void		(Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}
	switch(i)
	{
		case 0:
			(this->*f[i++])();
		case 1:
			(this->*f[i++])();
		case 2:
			(this->*f[i++])();
		case 3:
			(this->*f[i++])();
			break ;
		default:
			std::cout << "\033[31m" << "[Default] " << "\033[37m";
			std::cout << "*Harl seems to complain about insignificant problems.*";
			std::cout << "\033[0m" << std::endl;
	}
}

/* Private */

void	Harl::debug(void)
{
	std::cout << "\033[31m" << "[DEBUG] " << "\033[37m";
	std::cout << "Yes. A debug message.";
	std::cout << "\033[0m" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\033[31m" << "[INFO] " << "\033[37m";
	std::cout << "Here is some info. Isn't it ?";
	std::cout << "\033[0m" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\033[31m" << "[WARNING] " << "\033[37m";
	std::cout << "You have been warned.";
	std::cout << "\033[0m" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\033[31m" << "[ERROR] " << "\033[37m";
	std::cout << "Oh-oh. Something broke down.";
	std::cout << "\033[0m" << std::endl;
}
