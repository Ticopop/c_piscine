/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:36:05 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/28 16:13:32 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
/*
int main() 
{
    char str[] = "Hello, World!";

    printf("Antes: %s\n", str); // Debería mostrar el string original
    ft_strupcase(str);
    printf("Después: %s\n", str); // Debería mostrar el string en mayúsculas

    return 0;
}
*/
