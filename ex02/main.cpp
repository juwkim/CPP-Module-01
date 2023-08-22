/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 05:59:00 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 06:13:36 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "address of the string: " << &string << '\n';
	std::cout << "address held by stringPTR: " << stringPTR << '\n';
	std::cout << "address held by stringEFR: " << &stringREF << '\n';
	std::cout << '\n';
	std::cout << "value of the string: " << string << '\n';
	std::cout << "value pointed to by stringPTR: " << *stringPTR << '\n';
	std::cout << "value pointed to by stringREF: " << stringREF << '\n';
	
	return (EXIT_SUCCESS);
}
