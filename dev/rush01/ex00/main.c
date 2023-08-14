/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:25:54 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/26 16:46:15 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_input(int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	int	i;
	int	check;

	i = 0;
	check = check_input(argc, argv);
	if (check == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	while (argv[1][i])
	{	
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\ndamn, thank you for this beautiful input!\n", 43);
	return (0);
}
