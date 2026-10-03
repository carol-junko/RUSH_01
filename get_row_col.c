void get_row_left(int grid[4][4], int row, int *line)
{
    int i;

    i = 0;
    while(i < 4)
    {
        line[i] = grid[row][i];
        i++;
    }
}

void	get_row_right(int grid[4][4], int row, int *line)
{
    int i;

    i = 4;
    while(i > 0)
    {
        line[i] = grid[row][i];
        i--;
    }
}

void	get_col_top(int grid[4][4], int col, int *line)
{
    int i;

    i = 0;
    while(i < 4)
    {
        line[i] = grid[i][col];
        i++;
    }
}

void	get_col_bottom(int grid[4][4], int col, int *line)
{
    int i;

    i = 4;
    while(i > 0)
    {
        line[i] = grid[i][col];
        i--;
    }
}