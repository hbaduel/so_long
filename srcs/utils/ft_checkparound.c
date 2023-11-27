/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkparound.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:27:56 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/30 17:27:59 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_checkparound(char *map, int ennemy)
{
	int	sl;

	sl = ft_sizeline(map) + 1;
	if (map[ennemy - sl] == 'P')
		return (0);
	if (map[ennemy + sl] == 'P')
		return (0);
	if (map[ennemy - 1] == 'P')
		return (0);
	if (map[ennemy + 1] == 'P')
		return (0);
	return (1);
}	
