/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 10:40:39 by jborner           #+#    #+#             */
/*   Updated: 2023/04/02 17:52:44 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_setup(char *dirpath, char *key_num);

int	error(int ac, char **av)
{
	int					i;
	int					j;
	unsigned long long	input;

	input = 0;
	j = 1;
	if (ac == 3)
		j = 2;
	i = 0;
	while (av[j][i])
	{
		if (av[j][i] < '0' || av[j][i] > '9')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		input = input * 10 + (av[j][i] - '0');
		i++;
	}
	if (input > 4294967295)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2 && ac != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (error(ac, av))
		return (1);
	if (ac == 2)
		ft_setup("numbers.dict", av[1]);
	else
		ft_setup(av[1], av[2]);
}
