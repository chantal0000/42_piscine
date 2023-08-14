/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:02:23 by jborner           #+#    #+#             */
/*   Updated: 2023/04/02 17:51:55 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	read_file(int fd, int *num_int, char **num_str, int max_columns);

int	*input_num(int rows)
{
	int	*input_num;

	input_num = (int *)malloc(rows * sizeof(int));
	return (input_num);
}

char	**output_str(int rows, int max_columns)
{
	char	**output_str;
	int		i;

	output_str = malloc(rows * sizeof(char *));
	i = 0;
	while (i < rows)
	{
		output_str[i] = malloc(max_columns * sizeof(char));
		i++;
	}
	return (output_str);
}

void	fill_array(char *dirpath, int *num_int, char **num_str, int max_columns)
{
	int	fd;

	fd = open(dirpath, O_RDONLY);
	read_file(fd, num_int, num_str, max_columns);
	close(fd);
}

void	ft_free(int *num_int, char **num_str, int n)
{
	int	i;

	free(num_int);
	i = 0;
	while (i < n)
	{
		free(num_str[i]);
		i++;
	}
	free(num_str);
}
