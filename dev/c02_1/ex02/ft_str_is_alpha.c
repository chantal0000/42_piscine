/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:06:46 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/21 19:16:05 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "zella";
	char str2[] = " "; 
	char str3[] = "";
	printf("1: %d\n", ft_str_is_alpha(str1));
    printf("0: %d\n", ft_str_is_alpha(str2));
    printf("1: %d\n", ft_str_is_alpha(str3));
	
} */
