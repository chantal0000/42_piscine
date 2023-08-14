/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:03:56 by nabdurak          #+#    #+#             */
/*   Updated: 2023/04/02 18:38:43 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	search_dic(int *num_int, char **num_str, int n);

int	ft_len(char *num)
{
	int	i;

	i = 0;
	while (num[i])
		i++;
	return (i);
}

void	ft_write_hundreds(int *num_int, char **num_str, char *num)
{
	int		n;

	n = *num - '0';
	search_dic(num_int, num_str, n);
	search_dic(num_int, num_str, 100);
}

int	ft_tenpow(int c)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < c)
	{
		res = res * 10;
		i++;
	}
	return (res);
}

void	ft_write_digit(int *num_int, char **num_str, char *num, int c)
{
	int	n;

	n = *num - '0';
	search_dic(num_int, num_str, n);
	if (c > 2)
		search_dic(num_int, num_str, ft_tenpow(c));
}

void	ft_write_tens(int *num_int, char **num_str, char *num, int c)
{
	int	n;

	n = *num - '0';
	if (n != 1)
		search_dic(num_int, num_str, n * 10);
	else
	{
		n = 10 + (*(num + 1) - '0');
		search_dic(num_int, num_str, n);
		if (c - 1 > 2)
		{
			search_dic(num_int, num_str, ft_tenpow(c - 1));
		}
	}
}
