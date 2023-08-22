/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 05:14:10 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 05:31:04 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	private:
		std::string	mName;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
