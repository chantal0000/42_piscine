/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:11:21 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/15 18:28:16 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*
int main()
{
ft_is_negative(1);
write(1, "\n", 1);
ft_is_negative(2);
write(1, "\n", 1);
ft_is_negative(0);
write(1, "\n", 1);
ft_is_negative(-0);
write(1, "\n", 1);
ft_is_negative(-6);

return 0;
}*/
