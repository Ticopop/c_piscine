/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:29:19 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/27 11:44:42 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	char	*ptr;

	ptr = str;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*ptr != '\0')
	{
		if (*ptr < 'A' || *ptr > 'Z')
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
    char str1[] = "HELLO";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Resultado para str1: %d\n", ft_str_is_uppercase(str1)); // Debe ser 1
    printf("Resultado para str2: %d\n", ft_str_is_uppercase(str2)); // Debe ser 0
    printf("Resultado para str3: %d\n", ft_str_is_uppercase(str3)); // Debe ser 1

    return 0;
}
*/
