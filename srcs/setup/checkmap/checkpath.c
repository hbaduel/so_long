/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpath.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:36:45 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/17 14:38:10 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkmap.h"

int	ft_checkisok(char *temp, int *exit, int *nc, int newpos)
{
	if (temp[newpos] == '1' || temp[newpos] == '2')
		return (1);
	else if (temp[newpos] == 'E')
	{
		*exit = 1;
		return (1);
	}
	else if (temp[newpos] == 'C')
		*nc -= 1;
	temp[newpos] = 'P';
	return (0);
}

void	ft_searchpath(char *temp, int *exit, int *nc, int p)
{
	if (*nc == 0 && *exit == 1)
		return ;
	if (ft_checkisok(temp, exit, nc, p - (ft_sizeline(temp) + 1)) == 0)
	{
		temp[p] = '2';
		ft_searchpath(temp, exit, nc, p - (ft_sizeline(temp) + 1));
	}
	if (ft_checkisok(temp, exit, nc, p - 1) == 0)
	{
		temp[p] = '2';
		ft_searchpath(temp, exit, nc, p - 1);
	}
	if (ft_checkisok(temp, exit, nc, p + (ft_sizeline(temp) + 1)) == 0)
	{
		temp[p] = '2';
		ft_searchpath(temp, exit, nc, p + (ft_sizeline(temp) + 1));
	}
	if (ft_checkisok(temp, exit, nc, p + 1) == 0)
	{
		temp[p] = '2';
		ft_searchpath(temp, exit, nc, p + 1);
	}
	temp[p] = '2';
}

int	ft_checkpath(char *map)
{
	char	*temp;
	int		nc;
	int		exit;

	exit = 0;
	nc = ft_nc(map);
	temp = ft_strdup(map);
	if (!temp)
		return (1);
	ft_searchpath(temp, &exit, &nc, ft_strchr(temp, 'P'));
	free(temp);
	if (nc == 0 && exit == 1)
		return (0);
	return (1);
}
