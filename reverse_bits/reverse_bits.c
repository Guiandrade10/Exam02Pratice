/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:33:46 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 19:39:40 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char bit;

    while(i < 8)
    {
        bit = (octet >> i) & 1;
        bit = bit + '0';
        write(1, &bit, 1);
        i++;
    }
}

int main()
{
    reverse_bits(2);
}