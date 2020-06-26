/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokalap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:58:25 by smokalap          #+#    #+#             */
/*   Updated: 2020/06/26 17:12:20 by smokalap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void sastantua()
{
	int size;

	printf("Number of rows to display:\t");
	scanf("%d", &size);

	int row;
	int space;
	int star;

	for(row = 1; row <= size; row++)
	{
		for(space = size - row; space >= 1; space--)
		{
			printf(" ");
		}
		for(star = 1; star <= (row*2)-1; star++)
		{
			printf("*");
		}
		printf("\n");
	}
}
