/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:18:52 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/22 18:45:57 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int value_one = 10;
	int value_two = 20;
	int res_one;
	int res_two;

	ft_swap(&value_one, &value_two);
	res_one = (value_one /10) + 48;
	write (1, &res_one, 1);
	res_one = (value_one %10) + 48;
	write (1, &res_one, 1);

	write (1, " ", 1);

	res_two = (value_two /10) + 48;
	write (1, &res_two, 1);
	res_two = (value_two %10) + 48;
	write (1, &res_two, 1);
	
	return (0);
}
*/
