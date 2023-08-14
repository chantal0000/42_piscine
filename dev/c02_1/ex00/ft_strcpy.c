/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:24:16 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/22 15:03:00 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char src[] = "river";
	char dest[] = "cry me a";

	printf("%s\n", dest); 

	ft_strcpy(dest, src);
    printf("%s\n", dest);

	strcpy(dest, src);
    printf("%s\n", dest);

} */
