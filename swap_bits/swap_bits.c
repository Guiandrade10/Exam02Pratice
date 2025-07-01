/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:41:37 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 19:55:38 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
    unsigned char left = octet >> 4;
    unsigned char right = octet << 4;
    return right | left;
}

void print_bits(unsigned char octet)
{   
    int i;
    unsigned char bit;

    i = 7;
    while(i >= 0)
    {
        bit = (octet >> i) & 1;
        bit += '0';
        write(1, &bit, 1);
        i--;   
    }
    
}

int main()
{
    unsigned char result = swap_bits(0b11110000);
    print_bits(result);
}