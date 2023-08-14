/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:34:55 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/21 19:18:06 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
	printf("%d", ft_str_is_lowercase(argv[1]));
	}
	return 0;
}*/
