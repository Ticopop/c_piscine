/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:39:08 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/28 19:11:31 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex_string;
	int		i;

	hex_string = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write(1, "\\", 1);
			write(1, &hex_string[(unsigned char)str[i] / 16], 1);
			write(1, &hex_string[(unsigned char)str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*
int main (void)
{
	char char_str[] = "coucou\nntu vas bien?";
	ft_putstr_non_printable(char_str);
	return 0;
}
*/
