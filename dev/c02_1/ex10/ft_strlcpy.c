/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:10:23 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/22 14:56:46 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <bsd/string.h>
#include <stdio.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	char dest[] = "before";
	char src[] = "hello world";
	int size = 10;

	ft_strlcpy(dest, src, size);
	printf("mine: %s\n", dest);

	strlcpy(dest, src, size);
	printf("original: %s\n", dest);
}*/
