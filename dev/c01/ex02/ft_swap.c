/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:41:04 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/18 12:50:08 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 5;
	b = 6;
	
	ft_swap(&a, &b);
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	return 0;
}*/
