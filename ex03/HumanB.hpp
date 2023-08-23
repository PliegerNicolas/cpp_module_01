/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:08:12 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/30 10:02:38 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		/* Attributes */

		/* Constructors & Destructors */
		HumanB(std::string name);
		~HumanB(void);

		/* Member Functions */
		void	attack(void);
		Weapon	*getWeapon(void);
		void	setWeapon(Weapon &weapon);

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member Functions */

	private:
		/* Attributes */
		std::string	_name;
		Weapon		*_weapon;

		/* Constructors & Destructors */

		/* Member Functions */

};


#endif

