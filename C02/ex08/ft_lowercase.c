/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:02:59 by nlopez-r          #+#    #+#             */
/*   Updated: 2024/03/01 03:33:26 by nlopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*i
int main ()
{
	char str[] = "HELLO, WORLD!";

    printf("Antes: %s\n", str); // Debería mostrar el string original
    ft_strlowcase(str);
    printf("Después: %s\n", str); // Debería mostrar el string en minúsculas

    return 0;
}
*/
