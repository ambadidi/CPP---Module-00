/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi < abadidi@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:55:22 by abadidi           #+#    #+#             */
/*   Updated: 2022/04/26 17:46:44 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP
#include <ostream>

class megaphone
{
private:
	char **argv;
	int argc;
public:
	megaphone(char **argv);
	~megaphone();
};

megaphone::megaphone(char **argv)
{
	long long	i = -1;
	while (++i < argc)
	{
		long long	j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] <= 97 && argv[i][j] >= 122)
				this->argv[i][j] = argv[i][j] - 32;
			this->argv[i][j] = argv[i][j];
			j++;
		}
	}
}

megaphone::~megaphone()
{
}

#endif