/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 07:18:02 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/02 07:31:44 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int result;
	int i = 0;

	while(str[i])
	{
		result = str[i] - 48;
		result = result * 10;
		i++;
	}
	return(result);
}

void put_hex(int c)
{
	char *digits = "0123456789abcdef";

	int i = 0;
	if(c >= 16)
		put_hex(c / 16);
	c = digits[c % 16];
    write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int num = 0;

	if (argc == 2)
		put_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
    return (0);
}
