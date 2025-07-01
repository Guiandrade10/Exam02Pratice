/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 07:09:28 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 07:28:26 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int check[256] = {};

	if (argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			while(argv[1][i] && argv[2][j])
			{
				if(argv[1][i] == argv[2][j] && !check[argv[2][j]])
				{
					check[argv[2][j]] = 1;
					write(1, &argv[1][i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
