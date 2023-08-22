/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 05:19:22 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 05:33:25 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
	: mName(name)
{
	std::cout << mName << ": created." << '\n';
}

Zombie::~Zombie(void)
{
	std::cout << mName << ": destroyed." << '\n';
}

void	Zombie::announce(void)
{
	std::cout << mName << ": BraiiiiiiinnnzzzZ..." << '\n';
}
