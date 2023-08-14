/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:19:49 by chbuerge          #+#    #+#             */
/*   Updated: 2023/04/03 17:05:50 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	str_cpm(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1 == str2)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int	main(int argc, char *argv[])
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (str_cpm(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		put_str(argv[i]);
	return (0);
}
