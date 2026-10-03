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

int	is_grid_correct(int grid[4][4], int *clues);

int	is_correct_value(int grid[4][4], int row, int col, int nbr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == nbr || grid[i][col] == nbr)
			return (0);
		i++;
	}
	return (1);
}

int	solving(int grid[4][4], int *clues, int pos)
{
	int	row;
	int	col;
	int	nbr;

	if (pos == 16)
		return (is_grid_correct(grid, clues));
	row = pos / 4;
	col = pos % 4;
	nbr = 1;
	while (nbr <= 4)
	{
		if (is_correct_value(grid, row, col, nbr))
		{
			grid[row][col] = nbr;
			if (solving(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		nbr++;
	}
	return (0);
}
