/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:13:55 by jborner           #+#    #+#             */
/*   Updated: 2023/04/02 15:13:56 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

void	fill_int(int t, int counter, char *buffer, int *num_int)
{
	if (t == ':')
		num_int[counter] = ft_atoi(buffer);
}

int	fill_str(int t, int counter, char *buffer, char **num_str)
{
	int	k;

	if (t == '\n' || t == '\0')
	{
		k = 0;
		while (buffer[k])
		{
			num_str[counter][k] = buffer[k];
			k++;
		}
		counter++;
	}
	return (counter);
}

void	free_buffer(char *buffer)
{
	int	k;

	k = 0;
	while (buffer[k])
	{
		buffer[k] = '\0';
		k++;
	}
}

void	read_file(int fd, int *num_int, char **num_str, int max_columns)
{
	char	*buffer;
	char	t;
	int		bytes_read;
	int		k;
	int		counter;

	buffer = (char *)malloc(max_columns * sizeof(char));
	bytes_read = 1;
	counter = 0;
	k = 0;
	while (bytes_read != 0)
	{
		t = 0;
		bytes_read = read(fd, &t, 1);
		buffer[k++] = t;
		if (t == '\n' || t == '\0' || t == ':')
		{
			fill_int(t, counter, buffer, num_int);
			counter = fill_str(t, counter, buffer, num_str);
			free_buffer(buffer);
			k = 0;
		}
	}
	free(buffer);
}
