/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:51:16 by gude-and          #+#    #+#             */
/*   Updated: 2025/06/30 15:00:25 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int temp = 0;

    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                temp = argv[1][i] - 'a' + 1;
                while (temp > 0)
                {
                    
                    write(1, &argv[1][i], 1);
                    temp--;
                }
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                temp = argv[1][i] - 'A' + 1;
                while (temp > 0)
                {
                    
                    write(1, &argv[1][i], 1);
                    temp--;
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}