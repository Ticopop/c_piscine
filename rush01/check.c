/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:49:13 by fmontero          #+#    #+#             */
/*   Updated: 2024/02/18 21:42:36 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char check_arg(int argc, char **argv)
{
	int i;

	if (!(check_1_digit(argc))
		return (0);
	else if (argv[1][0] == '\n')
	{
		write(1, "Argument with incorrect format", 19);
		return (0);
	}
	else if (!(check_correct_format(argv)))
		return (0);
	else
		return (1);
}

static char check_1_arg(int argc)
{
	if (argc != 2)
		{
			write(1, "Invalid number of arguments", 30);
			return (0);
		}
	else
		return (1);
}

static char check_correct_format(char **argv)
{
	i = 0;
	while (argv[1][i - 1] != '\0')
	{ 
		if (!(argv[1][i] >= '1' && argv[1][i] <= '4'
					&& (argv[1][i+1] == ' ' || argv[1][i+1] == '\0')))
			{
				write(1, "Argument with incorrect format", 19);
					return (0);
			}
			i += 2;
		}
	}
	return (1);
}
