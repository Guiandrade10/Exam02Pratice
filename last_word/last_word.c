/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 07:30:29 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 07:51:01 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int end;

	if (argc == 2)
	{
		while(argv[1][i])
			i++;
		i--;
		while(i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		end = i;
		while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		i++;
		while(i <= end)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
