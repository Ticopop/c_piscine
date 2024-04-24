/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:31:02 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/03/01 04:45:08 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (counter);
}
/*
int main()
{
    char dest[40];
	char *src;
	int size;

	src = "Hello, world";
	size = 13;

    printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);

    return 0;
}
*/
