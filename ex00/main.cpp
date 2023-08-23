/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:59:59 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/25 13:23:12 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*foo;
	Zombie	*bar;

	foo = newZombie("Foo");
	foo->announce();

	randomChump("RandomChump_1");

	bar = newZombie("Bar");
	bar->announce();

	randomChump("RandomChump_2");

	delete bar;
	delete foo;

	return (0);
}
