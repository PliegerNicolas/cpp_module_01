/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:12:29 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 09:40:02 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <sstream>

static std::string	nameZombie(std::string name, int id)
{
	std::stringstream	ss;

	ss << name + "_" << id;
	name = ss.str();
	return (name);
}

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie				*horde;
	int					i;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		new (&horde[i]) Zombie(nameZombie(name, i + 1));
		horde[i++].announce();
	}
	return (horde);
}
