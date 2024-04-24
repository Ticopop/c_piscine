/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:16:37 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/27 11:44:22 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main()
{
	char test1[] = "hello"; // Contiene solo letras minúsculas
    char test2[] = "Hello123"; // Contiene letras y dígitos
    char test3[] = ""; // Cadena vacía

    printf("Test 1: %d\n", ft_str_is_lowercase(test1)); // Debería imprimir 1
    printf("Test 2: %d\n", ft_str_is_lowercase(test2)); // Debería imprimir 0
    printf("Test 3: %d\n", ft_str_is_lowercase(test3)); // Debería imprimir 1

    return 0;
}
*/
