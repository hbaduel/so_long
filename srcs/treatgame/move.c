/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:20:56 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/20 23:20:57 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treatgame.h"

void	ft_emove(t_data *g, char dir, int e, int newpos)
{
	int	x;
	int	y;

	x = ft_x(g->map, e);
	y = ft_y(g->map, e);
	if (g->ed != dir)
	{
		g->ed = dir;
		g->framee = 0;
	}
	if (g->map[newpos] == '0')
	{
		g->map[newpos] = 'N';
		g->map[e] = '0';
		mlx_put_image_to_window(g->mlx, g->win, g->assets->ground, x, y);
	}
}

void	ft_aftermove(t_data *game, t_assets *assets)
{
	int	move;
	int	e;

	if (game->isennemy == 0)
		return ;
	e = ft_strchr(game->map, 'N');
	if (ft_checkparound(game->map, ft_strchr(game->map, 'N')) == 0)
	{
		ft_endgame(game, assets, 2);
		return ;
	}
	srand(time(0));
	move = (rand() % 4) + 1;
	if (move == 1)
		ft_emove(game, 'U', e, e - (ft_sizeline(game->map) + 1));
	if (move == 2)
		ft_emove(game, 'L', e, e - 1);
	if (move == 3)
		ft_emove(game, 'D', e, e + (ft_sizeline(game->map) + 1));
	if (move == 4)
		ft_emove(game, 'R', e, e + 1);
}

int	ft_checknewpos(t_data *game, int newpos)
{
	game->nmove++;
	if (game->nmove == 1000)
	{
		ft_endgame(game, game->assets, 3);
		return (1);
	}
	if (game->map[newpos] == 'C')
		game->nc++;
	else if (game->map[newpos] == 'E')
	{
		if (game->exitstatus == 0)
			ft_endgame(game, game->assets, 1);
		return (1);
	}
	else if (game->map[newpos] == 'N')
	{
		ft_endgame(game, game->assets, 2);
		return (1);
	}
	return (0);
}

void	ft_move(t_data *g, char dir, int p, int newpos)
{
	int	x;
	int	y;

	x = ft_x(g->map, p);
	y = ft_y(g->map, p);
	if (g->pd != dir)
		g->framep = 0;
	g->pd = dir;
	if (g->map[newpos] != '1')
	{
		if (ft_checknewpos(g, newpos) == 1)
			return ;
		g->map[newpos] = 'P';
		g->map[p] = '0';
		mlx_put_image_to_window(g->mlx, g->win, g->assets->ground, x, y);
		ft_printstats(g, g->assets);
	}
	if (g->nc == g->tc && g->exitstatus == 1)
	{
		x = ft_x(g->map, ft_strchr(g->map, 'E'));
		y = ft_y(g->map, ft_strchr(g->map, 'E'));
		g->exitstatus = 0;
		mlx_put_image_to_window(g->mlx, g->win, g->assets->exito, x, y);
	}
	ft_aftermove(g, g->assets);
}
