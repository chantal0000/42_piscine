/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:35:59 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/27 12:23:37 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <bsd/string.h>
*/
unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = ft_strlen(dest);
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < 1)
		return (src_len + size);
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_len)
		return (dest_len + size);
	else
		return (dest_len + src_len);
}
/*
int				main(void)
{
	char			str1[20] = "hello";
	char			str2[10] = "world";
	unsigned int	size = 10;

	printf("before: %s\n", str1);
	printf("after: %u\n", ft_strlcat(str1, str2, size));
	printf("result: %s\n\n", str1); 

	printf("before: %s\n", str1);
    strlcat(str1, str2, size);
    printf("result: %s\n", str1);

}*/
