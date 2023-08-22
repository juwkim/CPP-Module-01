/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:42:19 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/23 07:14:31 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>

class FileReplacer
{
	public:
		FileReplacer(void);
		~FileReplacer(void);
		static bool replace(const char *file, const std::string &s1, const std::string &s2);
};
