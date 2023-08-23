/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:07:45 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/30 10:02:33 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		/* Attributes */

		/* Constructors & Destructors */
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		/* Member Functions */
		void	attack(void);
		Weapon	&getWeapon(void);

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member Functions */

	private:
		/* Attributes */
		std::string	_name;
		Weapon		&_weapon;

		/* Constructors & Destructors */

		/* Member Functions */

};

#endif
