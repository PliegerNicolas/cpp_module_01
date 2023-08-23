/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:35:54 by nicolas           #+#    #+#             */
/*   Updated: 2023/05/30 10:05:10 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	public:
		/* Attributes */

		/* Constructors & Destructors */
		Harl(void);
		~Harl(void);

		/* Member Functions */

		void	complain(std::string level);

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member Functions */

	private:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member Functions */

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
