/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:14:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 06:40:20 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void) const;
		void				setType(std::string type);

	private:
		std::string	mType;
};
