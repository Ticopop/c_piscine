/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:10:01 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/27 11:53:22 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main ()
{
	char test1[] = "HelloWorld";
	char test2[] = "Hello123";
	char test3[] = "";

	printf("Test 1: %d\n", ft_str_is_alpha(test1)); // Debería imprimir 1
    printf("Test 2: %d\n", ft_str_is_alpha(test2)); // Debería imprimir 0
    printf("Test 3: %d\n", ft_str_is_alpha(test3)); // Debería imprimir 1

	return 0;
}
*/
