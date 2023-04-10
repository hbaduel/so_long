/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manageframe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:37:46 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 14:37:48 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treatgame.h"

void	ft_framef(t_data *game, t_assets *assets)
{
	int	i;
	int	x;
	int	y;

	if (game->nc == game->tc)
		return ;
	if (game->framef == 15000)
		game->framef = 0;
	i = 0;
	while (game->map[i])
	{
		if (game->map[i] == 'C')
		{
			x = ft_x(game->map, i);
			y = ft_y(game->map, i);
		}
		if (game->map[i] == 'C' && game->framef == 0)
			mlx_put_image_to_window(game->mlx, game->win, assets->c0, x, y);
		else if (game->map[i] == 'C' && game->framef == 5000)
			mlx_put_image_to_window(game->mlx, game->win, assets->c1, x, y);
		else if (game->map[i] == 'C' && game->framef == 10000)
			mlx_put_image_to_window(game->mlx, game->win, assets->c2, x, y);
		i++;
	}
	game->framef++;
}

int	ft_manageframe(t_data *game)
{
	if (game->finishstatus != 0)
		return (1);
	ft_framef(game, game->assets);
	if (game->pd == 'U')
		ft_framepu(game, game->assets, ft_strchr(game->map, 'P'));
	else if (game->pd == 'L')
		ft_framepl(game, game->assets, ft_strchr(game->map, 'P'));
	else if (game->pd == 'D')
		ft_framepd(game, game->assets, ft_strchr(game->map, 'P'));
	else if (game->pd == 'R')
		ft_framepr(game, game->assets, ft_strchr(game->map, 'P'));
	if (game->isennemy == 1)
	{
		if (game->ed == 'U')
			ft_frameeu(game, game->assets, ft_strchr(game->map, 'N'));
		else if (game->ed == 'L')
			ft_frameel(game, game->assets, ft_strchr(game->map, 'N'));
		else if (game->ed == 'D')
			ft_frameed(game, game->assets, ft_strchr(game->map, 'N'));
		else if (game->ed == 'R')
			ft_frameer(game, game->assets, ft_strchr(game->map, 'N'));
		game->framee++;
	}
	game->framep++;
	return (0);
}
