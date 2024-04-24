/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:12:24 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/02/28 18:31:47 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bw;

	i = 0;
	bw = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (bw == 1)
				str[i] -= 32;
			bw = 0;
		}
		else
			if (str[i] >= '0' && str[i] <= '9')
				bw = 0;
		else
			bw = 1;
		i++;
	}
	return (str);
}
/*
int main() 
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; et+un hola";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}
*/
