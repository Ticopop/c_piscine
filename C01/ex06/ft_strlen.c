/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:36:44 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/22 18:53:43 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/*
int main()
{
	char str[]= "hola";
	int res_str;
	
	res_str =(ft_strlen(str) / 10) + 48;
	write (1,&res_str, 1);
	res_str = (ft_strlen(str) % 10) + 48;
	write (1,&res_str, 1);
	return 0;
}
*/
