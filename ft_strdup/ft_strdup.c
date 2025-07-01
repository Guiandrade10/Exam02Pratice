/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 06:56:57 by gude-and          #+#    #+#             */
/*   Updated: 2025/07/01 07:09:02 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *dst;

	while(src[i])
	{
		i++;
	}
	dst = malloc(i + 1);
	if (!dst)
		dst = 	NULL;
	i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}
