/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:06:16 by gude-and          #+#    #+#             */
/*   Updated: 2025/06/30 17:11:55 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int temp = 0;

    if (argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                temp = argv[1][i] - 32;
                write(1, &temp, 1);
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                temp = argv[1][i] + 32;
                write(1, &temp, 1);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}