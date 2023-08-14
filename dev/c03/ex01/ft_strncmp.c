/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:36:52 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/25 15:50:20 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i <= n)
	{
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
int main()
{
	char str[] = "ABC";
	char str1[] = "A";

	printf("%d\n", ft_strncmp(str, str1, 2));
	printf("%d\n", strncmp(str, str1, 2));
}*/
