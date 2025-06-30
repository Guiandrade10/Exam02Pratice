/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:16:08 by gude-and          #+#    #+#             */
/*   Updated: 2025/06/30 21:35:13 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int temp;

	if(argc == 2)
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				temp = ('z' - argv[1][i]) + 'a';
				write(1, &temp, 1);
			}
			else if
			(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				temp = ('Z' - argv[1][i]) + 'A';
				write(1, &temp, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
