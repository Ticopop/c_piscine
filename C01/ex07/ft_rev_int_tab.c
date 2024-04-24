/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:42:59 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/22 19:00:31 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temporary;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temporary = tab[start];
		tab[start] = tab [end];
		tab[end] = temporary;
		start ++;
		end --;
	}
}
/*
int main()
{
	int array[] = {1, 2, 3, 4, 5};
	int longitud = sizeof(array) / sizeof(array[0]);
	printf("array original: ");
	for (int i = 0; i < longitud; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	ft_rev_int_tab(array, longitud);
	printf("array invertido: ");
	for (int i = 0; i < longitud; i++)
	{

		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
*/
