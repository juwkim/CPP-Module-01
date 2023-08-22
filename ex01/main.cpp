/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 05:35:02 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 05:57:09 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 3) {
		std::cout << "Usage: <N> <name>" << '\n';
		return (EXIT_SUCCESS);
	}
	const int N = std::atoi(argv[1]);
	Zombie *horde = zombieHorde(N, std::string(argv[2]));
	for (int i = 0; i < N; ++i)
		horde[i].announce();
	delete[] horde;
	return (EXIT_SUCCESS);
}