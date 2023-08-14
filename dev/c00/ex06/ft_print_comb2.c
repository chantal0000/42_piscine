/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:27:51 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/15 15:25:40 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_num(int num)
{
	num = num + 48;
	write(1, &num, 1);
}

void ft_print_comb2(void)
{
	int	a;
	int	b;

	a  = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			put_num(a / 10);
			put_num(a % 10);
			write (1, " ", 1);
			put_num(b / 10);
			put_num(b % 10);
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}	
		b++;
		}
	a++;
	}

}

int main()
{
	ft_print_comb2();
	return 0;
}
