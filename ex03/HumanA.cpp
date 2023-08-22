/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:24:05 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 06:39:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
	mName(name),
	mWeapon(weapon)
{
}

HumanA::~HumanA(void) { }

void	HumanA::attack(void) const
{
	std::cout << mName << " attacks with their " << mWeapon.getType() << '\n';
}
