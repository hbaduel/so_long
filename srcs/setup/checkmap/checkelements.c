/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkelements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:42:16 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/17 14:42:39 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkmap.h"

int	ft_nc(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == 'C')
			j++;
		i++;
	}
	return (j);
}

int	ft_np(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == 'P')
			j++;
		i++;
	}
	return (j);
}

int	ft_ne(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == 'E')
			j++;
		i++;
	}
	return (j);
}

int	ft_n0(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == '0')
			j++;
		i++;
	}
	return (j);
}

int	ft_checkelements(char *map)
{
	int	i;

	i = 0;
	if (ft_nc(map) < 1 || ft_np(map) != 1 || ft_ne(map) != 1 || ft_n0(map) < 1)
		return (1);
	while (map[i])
	{
		if (map[i] != '1' && map[i] != '0' && map[i] != 'P' \
		&& map[i] != 'E' && map[i] != 'C' && map[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}
