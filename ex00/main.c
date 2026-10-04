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

int		is_input_valid(char *str);
int		solving(int grid[4][4], int *clues, int pos);
void	create_grid(int grid[4][4]);
void	get_clues(char *str, int *clues);
void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[4][4];

	if (argc != 2 || !is_input_valid(argv[1]))
	{
		write(1, "Error\n", 7);
		return (1);
	}
	get_clues(argv[1], clues);
	create_grid(grid);
	if (solving(grid, clues, 0))
	{
		print_grid(grid);
	}
	else
	{
		write(1, "Error\n", 7);
	}
	return (0);
}
