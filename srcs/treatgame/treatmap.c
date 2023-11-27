/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:24:53 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/08 15:25:21 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treatgame.h"

void	ft_nextimg(char c, int *x, int *y)
{
	if (c == '\n')
	{
		*x = 0;
		*y += 64;
	}
	else
		*x += 64;
}

void	ft_createmap(t_data *game, t_assets *assets, int x, int y)
{
	int	i;

	i = 3;
	while (game->map[i])
	{
		if (game->map[i] == '1')
			mlx_put_image_to_window(game->mlx, game->win, assets->wall, x, y);
		if (game->map[i] == '0')
			mlx_put_image_to_window(game->mlx, game->win, assets->ground, x, y);
		if (game->map[i] == 'C')
			mlx_put_image_to_window(game->mlx, game->win, assets->c0, x, y);
		if (game->map[i] == 'P')
			mlx_put_image_to_window(game->mlx, game->win, assets->pd1, x, y);
		if (game->map[i] == 'E')
			mlx_put_image_to_window(game->mlx, game->win, assets->exitc, x, y);
		if (game->map[i] == 'N')
			mlx_put_image_to_window(game->mlx, game->win, assets->ed1, x, y);
		ft_nextimg(game->map[i], &x, &y);
		i++;
	}
	ft_printstats(game, assets);
}

int	ft_treatmove(int code, t_data *game)
{
	int	p;

	p = ft_strchr(game->map, 'P');
	if (game->finishstatus == 0)
	{
		if (code == 119)
			ft_move(game, 'U', p, p - (ft_sizeline(game->map) + 1));
		if (code == 97)
			ft_move(game, 'L', p, p - 1);
		if (code == 115)
			ft_move(game, 'D', p, p + (ft_sizeline(game->map) + 1));
		if (code == 100)
			ft_move(game, 'R', p, p + 1);
	}
	if (code == 65307)
		ft_freeall(game);
	return (0);
}
