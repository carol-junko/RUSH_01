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

void	get_row_left(int grid[4][4], int row, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][i];
		i++;
	}
}

void	get_row_right(int grid[4][4], int row, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][3 - i];
		i++;
	}
}

void	get_col_top(int grid[4][4], int col, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[i][col];
		i++;
	}
}

void	get_col_bottom(int grid[4][4], int col, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[3 - i][col];
		i++;
	}
}
