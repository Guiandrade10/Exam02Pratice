/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:23:37 by gude-and          #+#    #+#             */
/*   Updated: 2025/06/30 14:49:05 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int i)
{
    char c;

    if (i > 9)
        putnbr(i / 10);
    c = (i % 10) + 48;
    write(1, &c, 1);
}

int main()
{
    int i = 1;
    

    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if(i % 3 == 0)
            write(1, "fizz\n", 5);
        else if(i % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
    
}