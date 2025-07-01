/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 06:26:43 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 06:51:23 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int signal = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
	|| str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-')
	{
		signal *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result * signal);
}

int main()
{
	char *str = "-42";
	printf("%d\n", ft_atoi(str));
}
