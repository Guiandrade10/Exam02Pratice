/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:00:27 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 08:06:44 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int* tab, unsigned int len)
{
    unsigned int i;
    int largest;

    if (len == 0)
        return 0;

    largest = tab[0];
    i = 1;
    while (i < len)
    {
        if (tab[i] > largest)
            largest = tab[i];
        i++;
    }
    return largest;
}
