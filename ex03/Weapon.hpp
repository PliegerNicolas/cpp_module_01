/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:00:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 09:53:28 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		/* Attributes */

		/* Constructors & Destructors */
		Weapon(std::string type);
		~Weapon(void);

		/* Member Functions */
		const std::string	&getType(void) const;
		void				setType(std::string type);

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member Functions */

	private:
		/* Attributes */
		std::string	_type;

		/* Constructors & Destructors */

		/* Member Functions */

};

#endif
