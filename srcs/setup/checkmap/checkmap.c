/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:31:46 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/16 16:39:36 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkmap.h"

int	ft_checkmaptwo(char *map)
{
	if (ft_checkwall(map) == 1)
	{
		ft_putstr("Error : MAP ERROR.\nYour map isn't surrounded by walls.\n");
		return (1);
	}
	if (ft_checkpath(map) == 1)
	{
		ft_putstr("Error : MAP ERROR.\nYour map is impossible to finish.\n");
		return (1);
	}
	return (0);
}

int	ft_checkmap(char *map)
{
	if (!map)
	{
		ft_putstr("Error : READ ERROR.\nYour map doesn't exist or \
can't be opened.\n");
		return (1);
	}
	if (ft_checkform(map) == 1)
	{
		ft_putstr("Error : MAP ERROR.\nYour map isn't rectangular.\n");
		return (1);
	}
	if (ft_checkelements(map) == 1)
	{
		ft_putstr("Error : MAP ERROR.\nYour map doesn't respect the elements \
rules.\n");
		return (1);
	}
	if (ft_checkmaptwo(map) == 1)
		return (1);
	return (0);
}
