/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coords.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:21:08 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/21 00:21:38 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_xwin(char *map)
{
	int	i;

	i = 0;
	while (map[i] && map[i] != '\n')
		i++;
	return (i * 64);
}

int	ft_ywin(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			j++;
		i++;
	}
	return ((j + 1) * 64);
}

int	ft_x(char *map, int pos)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < pos)
	{
		x++;
		if (map[i] == '\n')
			x = 0;
		i++;
	}
	return (x * 64);
}

int	ft_y(char *map, int pos)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (i < pos)
	{
		if (map[i] == '\n')
			y++;
		i++;
	}
	return (y * 64);
}
