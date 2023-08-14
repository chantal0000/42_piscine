/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:50:45 by jborner           #+#    #+#             */
/*   Updated: 2023/04/02 18:38:08 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		*input_num(int rows);
char	**output_str(int rows, int max_columns);
void	fill_array(char *dirpath, int *num_int,
			char **num_str, int max_columns);
void	ft_free(int *num_int, char **num_str, int n);
void	print_number(int *num_int, char **num_str, char *num);

int	count_file_lines(char *dirpath)
{
	int		fd;

	fd = open(dirpath, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 11);
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

int	count_rows(char *dirpath)
{
	char	buffer[1];
	int		fd;
	int		rows;

	rows = 0;
	fd = open(dirpath, O_RDONLY);
	while (read(fd, buffer, 1) > 0)
	{
		if (buffer[0] == '\n')
			rows++;
	}
	close(fd);
	return (rows);
}

int	count_columns(char *dirpath)
{
	char	buffer[1];
	int		columns;
	int		fd;
	int		max_columns;

	fd = open(dirpath, O_RDONLY);
	columns = 0;
	max_columns = 0;
	while (read(fd, buffer, 1) > 0)
	{
		columns++;
		if (buffer[0] == '\n')
		{
			if (columns > max_columns)
				max_columns = columns;
			columns = 0;
		}
	}
	close(fd);
	return (max_columns);
}

void	ft_setup(char *dirpath, char *key_num)
{
	int		rows;
	int		max_columns;
	int		*num_int;
	char	**num_str;

	if (!count_file_lines(dirpath))
		return ;
	rows = count_rows(dirpath);
	max_columns = count_columns(dirpath);
	num_int = input_num(rows);
	num_str = output_str(rows, max_columns);
	fill_array(dirpath, num_int, num_str, max_columns);
	print_number(num_int, num_str, key_num);
	ft_free(num_int, num_str, rows);
}
