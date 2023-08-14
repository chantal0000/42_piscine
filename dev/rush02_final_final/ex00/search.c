/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:44:56 by jborner           #+#    #+#             */
/*   Updated: 2023/04/02 17:50:39 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	search_dic(int *num_int, char **num_str, int n)
{
	int	i;
	int	j;
	int	begin;

	j = 0;
	while (num_int[j] != n)
		j++;
	i = 0;
	while (num_str[j][i] != '\n' && num_str[j][i] != '\0')
		i++;
	begin = 0;
	while (num_str[j][begin] == ' ')
	{
		begin++;
	}
	if (num_int[0] < 0) // ask nur
		write(1, " ", 1);
	else
		num_int[0] = -1; //ask nur
	while (begin < i)
	{
		write(1, &(num_str[j][begin]), 1);
		begin++;
	}
}
