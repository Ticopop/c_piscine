/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:19:49 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/27 11:45:01 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	char	*ptr;

	ptr = str;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*ptr != '\0')
	{
		if (*ptr < 32 || *ptr > 126)
		{
			return (0);
		}
		ptr++;
	}
	return (1);
}
/*
int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello\tWorld"; // Contiene un tabulador (\t)
    char str3[] = "";

    printf("Resultado para str1: %d\n", ft_str_is_printable(str1)); // Debe ser 1
    printf("Resultado para str2: %d\n", ft_str_is_printable(str2)); // Debe ser 0
    printf("Resultado para str3: %d\n", ft_str_is_printable(str3)); // Debe ser 1

    return 0;
}
*/
