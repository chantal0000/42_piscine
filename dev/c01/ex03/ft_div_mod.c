/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:45:34 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/24 12:55:25 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int *pt1;
	int *pt2;
		
	int div;
	int mod;
	
	a = 13;
	b = 5;

	pt1 = &div;
	pt2 = &mod;
	 ft_div_mod(a, b, pt1, pt2);
	printf("division:%d %d\n",  ft_div_mod(a, b, pt1, pt2));
	printf("modulo:%d\n", mod);
	return 0;

} 
