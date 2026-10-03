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

int	count_visible(int *line)
{
	int	tallest;
	int	visible;
	int	index;

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
