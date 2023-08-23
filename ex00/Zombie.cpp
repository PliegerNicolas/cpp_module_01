/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:02:52 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 09:31:50 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "\033[36;2mZombie : Default constructor called\033[0m" << std::endl;
	_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "\033[31;2mZombie : Default destructor called\033[0m" << std::endl;
	std::cout << _name;
	std::cout << ": Arrrgh ... I'm dying !";
	std::cout << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name;
	std::cout << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}
