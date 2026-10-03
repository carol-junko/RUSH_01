
void	fill_clues(char *str, int *clues)
{
    while (*str != '\0')
    {
        if(*str >= '1' && *str <= '4')
        {
            *clues = *str - '0';
            clues++;
        }
        str++;
    }
}