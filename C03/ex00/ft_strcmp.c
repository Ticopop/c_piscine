/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 02:00:24 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/03/01 02:10:17 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, chr *s2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
/*
int main() {
    char str1[] = "Hola";
    char str2[] = "Hola";
    char str3[] = "Mundo";

    int resultado1 = strcmp(str1, str2);
    int resultado2 = strcmp(str1, str3);

    printf("Comparación 1: %d\n", resultado1);
    printf("Comparación 2: %d\n", resultado2);

    return 0;
}
*/
