/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:53:15 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/18 12:56:57 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	temp;

	j = 0;
	while (j < size -1)
	{
		if (tab[j] > tab[j + 1])
		{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			j = 0;
		}
		j++;
	}
}
/*
#include <stdio.h>

int main()
{
	int arr[] = {-2, 0, 5, 3, 4, 1, 7, 8, -9, 8};
	int size;
	int i;	
	size = 10;
	i = 0;
	ft_sort_int_tab(arr, size);
	while(i < size)
	{
	printf("%d", arr[i]);
	i++;
	}
	return 0;
}*/
