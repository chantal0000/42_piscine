/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:36:25 by mwallage          #+#    #+#             */
/*   Updated: 2023/03/19 18:05:31 by mwallage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check_negative(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(2, "Error: x and y must be positive integers\n", 41);
		return ;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	check_negative(x, y);
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((j == 1 && i == 1) || (j == 1 && i == y)
				|| (j == x && i == 1) || (j == x && i == y))
				ft_putchar('o');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else if (j == 1 || j == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
