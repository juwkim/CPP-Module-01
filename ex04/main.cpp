/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:41:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 07:13:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FileReplacer.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4) {
		std::cout << "Usage: filename s1 s2" << '\n';
		return (EXIT_SUCCESS);
	}
	if (FileReplacer().replace(argv[1], argv[2], argv[3]) == false)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
