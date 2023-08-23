/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:07:37 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 09:57:33 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

/* Constructors & Destructors */

/* Public */

HumanB::HumanB(std::string name)
{
	std::cout << "\033[36;2mHumanB : Constructor with name parameter called\033[0m" << std::endl;
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << "\033[31;2mHumanB : Default destructor called\033[0m" << std::endl;
}

/* Member Functions */

/* Public */

void	HumanB::attack(void)
{
	std::cout << _name;
	std::cout << " attacks with their '";
	if (_weapon != NULL)
		std::cout << _weapon->getType();
	std::cout << "'." << std::endl;
}

Weapon	*HumanB::getWeapon(void)
{
	if (_weapon)
		return (_weapon);
	return (NULL);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
