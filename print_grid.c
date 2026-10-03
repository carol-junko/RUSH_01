#include <unistd.h>
void print_grid(int grid[4][4])
{
    int row = 0;
    int i = 0;
    while(row < 4)
    {
        while(i < 4)
        {
            write(1, &"0123456789"[grid[row][i]], 1);
            if(!(i == 3))
                write(1, " ", 1);
            i++;
        }
        write(1, "\n", 1);
        i = 0;
        row++;
    }
}
