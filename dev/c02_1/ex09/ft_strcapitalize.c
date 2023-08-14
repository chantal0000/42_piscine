/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:56:48 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/22 09:26:58 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] == str[0])
		{
			if (str[0] >= 'a' && str[0] <= 'z')
				str[0] = str[0] - 32;
		}
		else
			if ((!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
						|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
						|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
				&& (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "Salut, coMMent tu vas ? 42Mots quarante-deux; cinquante+et+un";
//	char str[] = "";
	printf("%s", ft_strcapitalize(str));
	return 0;
}*/
