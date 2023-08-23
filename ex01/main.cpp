/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:02:45 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/25 14:44:58 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int	N;

	N = 8;
	horde = zombieHorde(N, "Esteban");
	if (!horde)
		return (1);
	delete[] horde;
	return (0);
}
