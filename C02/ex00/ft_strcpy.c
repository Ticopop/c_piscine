/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 13:48:24 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/27 14:54:55 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main() 
{
    char source[] = "Hola, mundo!";
    char destination[50];
   	
	ft_strcpy(destination, source);

    printf("Cadena de origen: %s\n", source);
    printf("Cadena de destino: %s\n", destination);

    return 0;
}
*/
