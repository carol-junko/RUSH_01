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

int	is_input_valid(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			if (!(str[index] >= '1' && str[index] <= '4'))
				return (0);
		}
		else
		{
			if (str[index] != ' ')
				return (0);
		}
		index++;
	}
	if (index != 31)
		return (0);
	return (1);
}
