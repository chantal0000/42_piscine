/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:36:25 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/22 13:40:31 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char src[] = "break up";
	char dest[] = "if we ever";
	
	printf("%s\n", dest); 

	ft_strncpy(dest, src, 5);
    printf("%s\n", dest);

	strncpy(dest, src, 5);
    printf("%s\n", dest);

}*/
