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

int		count_visible(int *line);
void	get_row_left(int grid[4][4], int row, int *line);
void	get_row_right(int grid[4][4], int row, int *line);
void	get_col_top(int grid[4][4], int col, int *line);
void	get_col_bottom(int grid[4][4], int col, int *line);

int	is_grid_correct(int grid[4][4], int *clues)
{
	int	i;
	int	line[4];

	i = 0;
	while (i < 4)
	{
		get_col_top(grid, i, line);
		if (count_visible(line) != clues[0 + i])
			return (0);
		get_col_bottom(grid, i, line);
		if (count_visible(line) != clues[4 + i])
			return (0);
		get_row_left(grid, i, line);
		if (count_visible(line) != clues[8 + i])
			return (0);
		get_row_right(grid, i, line);
		if (count_visible(line) != clues[12 + i])
			return (0);
		i++;
	}
	return (1);
}
