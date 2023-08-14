/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:08:00 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/27 11:35:05 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}	
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str;
	char *substring;
	
	str = "If I lived in Colorado";
	substring = "in";
	printf("%s\n", ft_strstr(str, substring));
	printf("%s\n\n", strstr(str, substring));

	substring = "";
    printf("%s\n", ft_strstr(str, substring));
    printf("%s\n\n", strstr(str, substring));

	substring = "olo";
    printf("%s\n", ft_strstr(str, substring));
    printf("%s\n\n", strstr(str, substring));

	substring = "no";
    printf("%s\n", ft_strstr(str, substring));
    printf("%s\n\n", strstr(str, substring));

	return 0;
}*/
