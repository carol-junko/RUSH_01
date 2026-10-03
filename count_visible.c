int	count_visible(int *line)
{
    int tallest;
    int visible;
    int index;

    index = 0;
    visible = 0;
    tallest = 0;
    while (index < 4)
    {
		if (line[index] > tallest)
		{
			visible = visible + 1;
			tallest = line[index];
		}
        index++;
    }
    return (visible);
}
