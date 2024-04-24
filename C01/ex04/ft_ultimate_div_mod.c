/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:26:17 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/22 18:47:52 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	storage_one;
	int	storage_two;

	storage_one = *a / *b;
	storage_two = *a % *b;
	*a = storage_one;
	*b = storage_two;
}
/*
int main(void)
{
	int value_one = 20;
	int value_two = 10;

	int res_one;
	int res_two;

	ft_ultimate_div_mod(&value_one, &value_two);
	
	res_one = (value_one / 10) + 48;
	write (1, &res_one, 1);
	res_one = (value_one % 10) + 48;
	write (1, &res_one, 1);

	write (1, " ", 1);

	res_two = (value_two / 10) + 48;
	write (1, &res_two, 1);
	res_two = (value_two % 10) + 48;
	write (1, &res_two, 1);

	return 0;
}
*/
