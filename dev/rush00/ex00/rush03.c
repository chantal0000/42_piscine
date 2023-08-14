/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:52 by mwallage          #+#    #+#             */
/*   Updated: 2023/03/18 16:03:05 by mwallage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	// counter for rows
	int i;
	// counter for columns
	int j;
	// checks if the parameters given in main are smaller than 1 (meaning 0 or negative)
	if (x < 1 || y < 1)
		return;
	i = 1;
	j = 1;
	// loop, while i is smaller or equal than y
	// value for y and x comes from the main function
	while (i <= y)
	{
		// loop, while j is smaller or equal than x
		while (j <= x)
		{
			// checks if we are in the first col and either first or last row
			if (j == 1 &&  (i == 1 || i == y))
				// if yes, print 'A'
				ft_putchar('A');
			// only if the condition before is not true:
			// checks if we are in the last col and either first or last row
			else if (j == x && (i == 1 || i == y))
				// if yes, print 'C'
				ft_putchar('C');
			
			// only if the conditions before are not true:
			// checks if we are in the first OR last row OR first OR last col
			else if (i == 1 || i == y || j == 1 || j == x)
				// if yes, print 'B' 
				ft_putchar('B');
			// only if the conditions before are not true:
			// print space
			else
				ft_putchar(' ');
			// increment col counter
			j++;
		}
		// print new line, move to next row
		ft_putchar('\n');
		// reset column counter j
		j = 1;
		// increment the row counter
		i++;
	}
}
