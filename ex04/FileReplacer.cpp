/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:42:03 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 07:32:20 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <iostream>

FileReplacer::FileReplacer(void) { }
FileReplacer::~FileReplacer(void) { }

bool FileReplacer::replace(const char *file, const std::string &s1, const std::string &s2)
{
	std::ifstream in; in.open(file, std::ios_base::in);
	if (in.is_open() == false) return false;
	std::ofstream out; out.open(std::string(file).append(".replace").c_str(), std::ios_base::out);
	if (out.is_open() == false) {
		in.close();
		return false;
	}

	std::string				line;
	std::string::size_type	pos = 0;
	std::string::size_type	cur;

	while (in.eof() == false)
	{
		std::getline(in, line);
		while ((cur = line.find(s1, pos)) != std::string::npos)
		{
			out << line.substr(pos, cur - pos) << s2;
			pos = cur + s1.length();
		}
		out << line.substr(pos) << '\n';
	}
	in.close();
	out.close();
	return (true);
}
