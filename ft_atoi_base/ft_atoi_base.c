/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 06:35:53 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/02 07:00:16 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(const char *str, int str_base);
int isspace(int c);
int isvalid(int c, int baselen);

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int signal = 1;

	while(isspace(str[i]))
		i++;

	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			signal = signal * -1;
		i++;
	}
	while (str[i] && isvalid(str[i], str_base))
	{
		res = res * str_base;

		if(str[i] >= '0' && str[i] <= '9')
		res = res + str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
		res = res + str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
		res = res + str[i] - 'A' + 10;
		i++;
	}
	return(signal * res);
}

int isspace(int c)
{
	if(c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return(1);
	return (0);
}

int isvalid(int c, int baselen)
{
	char *lower = "0123456789abcdef";
	char *upper = "0123456789ABCDEF";

	int i = 0;

	while(i < baselen)
	{
		if(c == lower[i] || c == upper[i])
			return (1);
		i++;
	}
	return (0);
}
