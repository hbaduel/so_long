/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setennemy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:28:06 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/30 17:28:10 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup.h"

void	ft_setennemy(t_data *game)
{
	int	ennemy;
	int	i;
	int	n0;

	i = 0;
	n0 = 0;
	while (game->map[i])
	{
		if (game->map[i] == '0')
			n0++;
		i++;
	}
	if (n0 < 10)
		return ;
	srand(time(0));
	while (ft_strchr(game->map, 'N') == -1)
	{
		ennemy = rand() % (i + 1);
		if (game->map[ennemy] == '0' && ft_checkparound(game->map, ennemy) == 1)
		{
			game->map[ennemy] = 'N';
			game->isennemy = 1;
		}
	}	
}
