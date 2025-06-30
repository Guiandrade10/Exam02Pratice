/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-and <gude-and@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:46:53 by gude-and          #+#    #+#             */
/*   Updated: 2025/06/30 22:02:01 by gude-and         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 0;
	int num;

	if(argc == 4)
	{
		i = atoi(argv[1]);
		num = atoi(argv[3]);
		if (argv[2][0] == '+')
			printf("%d", i + num);
		if ((argv[2][0] == '-'))
			printf("%d", i - num);
		if ((argv[2][0] == '*'))
			printf("%d", i * num);
		if ((argv[2][0] == '/'))
			printf("%d", i / num);
		if ((argv[2][0] == '%'))
			printf("%d", i % num);
	}
	printf("\n");
}
