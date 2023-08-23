/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:51:02 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 09:46:14 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";	// original value
	std::string	*stringPTR = &str;			// holds the address of the original value
	std::string	&stringREF = str;			// synatic sugar, it's an alias of str that
											// doesn't need to be dereferenced and cannot
											// be changed.

	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
