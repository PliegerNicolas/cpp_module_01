/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:30:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/28 23:22:22 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl = Harl();
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	return (0);
}
