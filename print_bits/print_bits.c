/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:13:44 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 19:28:06 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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