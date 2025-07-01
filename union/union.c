/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:58:56 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 20:28:55 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int check[256] = {};
    
    if (argc == 3)
    {
        while(argv[1][i])
        {
            check[(int)argv[1][i]] = 1;
            i++;
        }
        i = 0;
        while(argv[2][i])
        {
            check[(int)argv[2][i]] = 1;
            i++;
        }
        i = 0;
        while(argv[1][i])
        {
            if(check[(int)argv[1][i]])
            {
                write(1, &argv[1][i], 1);
                check[(int)argv[1][i]] = 0;
            }
            i++;
        }
        i = 0;
        while(argv[2][i])
        {
            if(check[(int)argv[2][i]])
            {
                write(1, &argv[2][i], 1);
                check[(int)argv[2][i]] = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}