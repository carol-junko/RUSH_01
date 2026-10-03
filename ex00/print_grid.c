/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caoki <caoki@student.42.fr				    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:14:47 by carolinajun       #+#    #+#             */
/*   Updated: 2026/10/04 00:14:48 by carolinajun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count_visible(int *line);

void	print_grid(int grid[4][4])
{
	int	row;
	int	i;

	row = 0;
	i = 0;
	while (row < 4)
	{
		while (i < 4)
		{
			write(1, &"0123456789"[grid[row][i]], 1);
			if (!(i == 3))
			{
				write(1, " ", 1);
			}
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		row++;
	}
}
