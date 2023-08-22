/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 05:14:10 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 05:48:30 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	setName(const std::string &name);
	private:
		std::string	mName;
};

Zombie	*zombieHorde(int N, std::string name);
