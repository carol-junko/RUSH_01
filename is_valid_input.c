int is_input_valid(char *str)
{
    int index;

    index = 0;
    while (str[index] != 0)
    {
		if(index % 2 == 0)
		{
			if(!(str[index] >= '1' && str[index] <= '4'))
				return (0);
		} else {
			if(!(str[index] == ' ' || str[index] == '\0'))
				return (0);
		}
		index++;
    }
    if (index != 31)
        return (0);
    return (1);
}
