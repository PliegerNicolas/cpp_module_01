/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:01:03 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/25 13:34:03 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {


	private:
	/* Attributs */
		std::string	_name;
	public:
	/* Constructor & Destructor */
		Zombie(std::string name);
		~Zombie(void);

	/* Member function */
		void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
