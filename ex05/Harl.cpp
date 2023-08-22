/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 07:26:31 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 08:07:24 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void){}

void	Harl::complain(std::string level)
{
	const int			MAX_LEVEL = 4;
	void (Harl::*fp[MAX_LEVEL])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string	type[MAX_LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < MAX_LEVEL; ++i)
	{
		if (level == type[i]) {
			(this->*fp[i])();
			return;
		}
	}
	std::cout << "[ " << level << " ]" << '\n'
			<< "[ Probably complaining about insignificant problems ]" << '\n';
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << '\n'
			<< "I love having extra bacon for my" 
			<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
			<< " I really do!" << '\n' << '\n';
}
void	Harl::info(void)
{
	std::cout << "[ INFO ]" << '\n'
			<< "I cannot believe adding extra bacon costs more money. "
			<< "You didn’t put enough bacon in my burger! "
			<< "If you did, I wouldn’t be asking for more!" << '\n' << '\n';
}

void	Harl::warning(void)
{
	std::cerr << "[ WARNING ]" << '\n';
	std::cerr << "I think I deserve to have some extra bacon for free. "
			<< "I’ve been coming for years whereas you started working here "
			<< "since last month." << '\n' << '\n';
}

void	Harl::error(void)
{
	std::cerr << "[ ERROR ]" << '\n';
	std::cerr << "This is unacceptable! "
			<< "I want to speak to the manager now." << '\n' << '\n';
}
