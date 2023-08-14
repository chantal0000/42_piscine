/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_sim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:25:26 by chbuerge          #+#    #+#             */
/*   Updated: 2023/03/26 16:51:35 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_loop(int i, char *argv[])
{
	while (argv[1][i])
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || argv[1][i] > '4')
			{
				return (1);
			}
		}
		else
		{
			if (argv[1][i] != ' ')
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	check_input(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		return (1);
	}
	if (ft_loop(i, argv) == 1)
		return (1);
	while (argv[1][i])
	{
		i++;
	}
	if (i != 31)
	{
		return (1);
	}
	return (0);
}
