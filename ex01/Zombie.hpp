/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:03:35 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/25 14:24:53 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		/* Constructor & Destructor */
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		/* Attribut names */

		/* Member functions */
		void	announce(void);

	protected:

	private:
		/* Attribut names */
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
