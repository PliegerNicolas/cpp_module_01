/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:03:40 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 09:54:49 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

/* Constructors & Destructors */

/* Public */

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
	return ;
}

/* Member Functions */

/* Public */

const std::string	&Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
