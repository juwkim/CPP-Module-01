/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:17:27 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 06:40:15 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
	mType(type)
{
}

Weapon::~Weapon(void) { }

const std::string&	Weapon::getType(void) const
{
	return (mType);
}

void	Weapon::setType(std::string type)
{
	mType = type;
}
