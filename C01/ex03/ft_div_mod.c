/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:22:42 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/22 18:46:27 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int value_one = 20;
	int value_two = 5;
	
	int res_one;
	int res_two;

	ft_div_mod(value_one, value_two, &value_one, &value_two);
	
	res_one = (value_one /10) + 48;
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
