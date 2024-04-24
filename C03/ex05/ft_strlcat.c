/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 02:21:44 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/03/01 02:51:23 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
		dest[i] = src[j];
	i++;
	j++;
	dest[i] = '\0';
	return (res);
}
/*
int main()
{
	char dest[20] = "Hello";
	char src[] = "World";
	unsigned int size = 20;

	unsigned int result= ft_strlcat(dest, src, size);
	printf("%s\n" , dest);
	printf("%u\n" , result);
	return(0);
}
*/
