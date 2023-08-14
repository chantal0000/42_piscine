/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:13:31 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/18 12:51:41 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int main()
{
	int a;
	int b;
		
	a = 13;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d\n", a);
	printf("mod: %d\n", b);
	return 0;
} */
