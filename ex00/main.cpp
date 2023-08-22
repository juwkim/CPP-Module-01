/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 05:24:54 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 05:32:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*z;

	std::cout << "========== STACK TEST ==========" << '\n';
	for (int i = 1; i < argc; ++i)
		randomChump(std::string(argv[i]));

	std::cout << "========== HEAP TEST ===========" << '\n';
	for (int i = 1; i < argc; ++i) {
		z = newZombie(std::string(argv[i]));
		z->announce();
		delete z;
	}
	return (0);
}
