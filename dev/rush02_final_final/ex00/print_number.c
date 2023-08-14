/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:04:25 by jborner           #+#    #+#             */
/*   Updated: 2023/04/02 18:30:10 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		ft_len(char *num);
void	ft_write_hundreds(int *num_int, char **num_str, char *num);
void	ft_write_digit(int *num_int, char **num_str, char *num, int c);
void	ft_write_tens(int *num_int, char **num_str, char *num, int c);
int		ft_tenpow(int c);
void	search_dic(int *num_int, char **num_str, int n);

int	ft_len_one(int *num_int, char **num_str, char *num, int c)
{
	if (ft_len(num) == 1)
	{
		ft_write_digit(num_int, num_str, num, c);
		return (1);
	}
	return (0);
}

void	write_options(int c, int *num_int, char **num_str, char *num)
{
	if (c % 3 == 2) 
		ft_write_hundreds(num_int, num_str, num);
	if (c % 3 == 0)
		ft_write_digit(num_int, num_str, num, c);
}

int	check_zeros(char *num)
{
	if (*num == '0' && (*(num - 1) != '0' || *(num - 2) != '0'))
		return (0);
	return (1);
}

void	print_number(int *num_int, char **num_str, char *num)
{
	int	c;

	c = ft_len(num) - 1;
	if (ft_len_one(num_int, num_str, num, c))
		return ;
	while (*num)
	{
		if (*num != '0')
		{
			write_options(c, num_int, num_str, num);
			if (c % 3 == 1)
			{
				ft_write_tens(num_int, num_str, num, c);
				if (*num == '1')
				{
					num++;
					c--;
				}
			}
		}
		else if (c % 3 == 0 && *(num + 1) != '\0' && !check_zeros(num))
			search_dic(num_int, num_str, ft_tenpow(c));
		num++;
		c--;
	}
}
