/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:33:34 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 06:40:50 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	mName(name)
{
}

HumanB::~HumanB(void) {}

void	HumanB::attack(void) const
{
	std::cout << mName << " attacks with their " << mWeapon->getType() << '\n';
}

void	HumanB::setWeapon(Weapon &weapon)
{
	mWeapon = &weapon;
}
