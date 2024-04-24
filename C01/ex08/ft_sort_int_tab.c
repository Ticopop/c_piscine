/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:17:46 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/26 19:51:55 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	iterator[2];
	int	temp;

	iterator[0] = 0;
	while (iterator[0] < size)
	{
		iterator[1] = iterator[0] + 1;
		while (iterator[1] < size)
		{
			if (tab[iterator[0]] > tab[iterator [1]])
			{
				temp = tab[iterator[1]];
				tab[iterator[1]] = tab[iterator[0]];
				tab[iterator[0]] = temp;
			}
			iterator[1]++;
		}
		iterator[0]++;
	}
}
/*
int main(void)
{
	int sort[] = {8, 1, 4, 500, 2, 7, 120};
	int length = sizeof(sort) / sizeof (sort[0]);
	int iterator;

	ft_sort_int_tab(sort, length);

	while (iterator < length)
	{
		printf("%d,", sort[iterator]);
		iterator++;
	}
	return 0;
}
*/
