/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 07:02:14 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/02 07:13:00 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char c;

	if (n > 9)
		ft_putchar(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc <= 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_putchar(argc - 1);
	write(1, "\n", 1);
}
