/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:42:03 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/18 12:55:24 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int len;
	int i;
	len = 5;
	i = 0;
	ft_rev_int_tab(arr, len);
	while(i < len)
	{
	printf("%d", arr[i]);
	i++;
	}
	return 0;
}
