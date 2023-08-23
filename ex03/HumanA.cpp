/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:07:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 09:49:12 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

/* Constructors & Destructors */

/* Public */

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	std::cout << "\033[36;2mHumanA : Constructor with name & weapon paramater \
called\033[0m" << std::endl;
	_name = name;
}

HumanA::~HumanA(void)
{
	std::cout << "\033[31;2mHumanA : Default destructor called\033[0m" << std::endl;
}

/* Member Functions */

/* Public */

void	HumanA::attack(void)
{
	std::cout << _name;
	std::cout << " attacks with their '";
	std::cout << _weapon.getType();
	std::cout << "'." << std::endl;
}

Weapon	&HumanA::getWeapon(void)
{
	return (_weapon);
}
