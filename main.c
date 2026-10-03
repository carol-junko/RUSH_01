#include <unistd.h>

int 	is_input_valid(char *str);
int		count_visible(int *line);
void	fill_clues(char *str, int *clues);
void	print_grid(int grid[4][4]);
void	get_row_left(int grid[4][4], int row, int *line);
void	get_row_right(int grid[4][4], int row, int *line);
void	get_col_top(int grid[4][4], int col, int *line);
void	get_col_bottom(int grid[4][4], int col, int *line);

int	main(int argc, char **argv)
{
	int	clues[16];
	int grid[4][4] = {{4,3,2,1}, {1,2,2,2}, {4,3,2,1}, {1,2,2,2}};
	int line[4] = {2, 3, 1, 4};
	int i = 0; 

	if (argc != 2 || !is_input_valid(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	fill_clues(argv[1], clues);
	print_grid(grid);

	get_row_left(grid, 1, line);
	write(1, &"0123456789"[count_visible(line)], 1);
	while (i < 4)
	{
		write(1, &"0123456789"[line[i]], 1);
		i++;
	}
	get_row_right(grid, 1, line);
	write(1, &"0123456789"[count_visible(line)], 1);
	
	get_col_bottom(grid, 2, line);
	write(1, &"0123456789"[count_visible(line)], 1);
	write(1, "\n", 1);

	return (0);
}