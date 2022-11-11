/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:55:35 by fgiulian          #+#    #+#             */
/*   Updated: 2022/11/11 15:55:36 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return 0;
	}
	else
	{
		for(int j = 1; j < argc; j++)
		{
			for(int i = 0; argv[j][i] != '\0' ; i++)
			{
				std::cout<<(char)toupper(argv[j][i]);
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}
