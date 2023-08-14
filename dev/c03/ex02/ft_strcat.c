/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:59:09 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/25 15:51:57 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "";
	char dest[] = "";
	char src1[] = "";
	char dest1[] = "";

	ft_strcat(dest, src);
	printf ("%s\n", dest);
	
	strcat(dest1, src1);
	printf("%s\n", dest);

}*/
