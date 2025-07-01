/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:43:01 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 21:36:57 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int positivenbr(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] < '0' || str[i] > '9')
            return(0);
        i++;
    }
    return (1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;

    while(str[i])
    {
        result = result * 10 + (str[i] - '0');
		i++;
    }
    return(result);
}

int isprime(int c)
{
    int i = 2;
    
    if(c == 2)
        return(1);

    while(i < c)
    {
        if(c % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void putnbr(int c)
{   
    int i = 0;
    
    if(c > 9)
    {
        putnbr(c / 10);
        c = c % 10;
    }
    if (c <= 9)
    i = c + 48;
    write(1, &i, 1);
}

int main(int argc, char **argv)
{
    int i = 2;
    int num;
    int result = 0;
    if(argc == 2 && positivenbr(argv[1]))
    {
        num = ft_atoi(argv[1]);
        while(i <= num)
        {
            if(isprime(i))
            {   
                result = result + i;
            }
            i++;
        }
        putnbr(result);
    }
    write(1, "\n", 1);
}