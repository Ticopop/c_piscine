/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:17:13 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/27 11:44:06 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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
	char test1[] = "12345"; // Contiene solo dígitos
    char test2[] = "Hello123"; // Contiene letras y dígitos
    char test3[] = ""; // Cadena vacía

    printf("Test 1: %d\n", ft_str_is_numeric(test1)); // Debería imprimir 1
    printf("Test 2: %d\n", ft_str_is_numeric(test2)); // Debería imprimir 0
    printf("Test 3: %d\n", ft_str_is_numeric(test3)); // Debería imprimir 1

    return 0;
}
*/
