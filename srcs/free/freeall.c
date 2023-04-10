/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:32:36 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/30 14:54:26 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void	ft_desass(t_data *game, t_assets *assets)
{
	if (assets->wall)
		mlx_destroy_image(game->mlx, assets->wall);
	if (assets->exito)
		mlx_destroy_image(game->mlx, assets->exito);
	if (assets->exitc)
		mlx_destroy_image(game->mlx, assets->exitc);
	if (assets->ground)
		mlx_destroy_image(game->mlx, assets->ground);
	if (assets->c0)
		mlx_destroy_image(game->mlx, assets->c0);
	if (assets->c1)
		mlx_destroy_image(game->mlx, assets->c1);
	if (assets->c2)
		mlx_destroy_image(game->mlx, assets->c2);
	if (assets->sb)
		mlx_destroy_image(game->mlx, assets->sb);
	if (assets->end1)
		mlx_destroy_image(game->mlx, assets->end1);
	if (assets->end2)
		mlx_destroy_image(game->mlx, assets->end2);
	if (assets->end3)
		mlx_destroy_image(game->mlx, assets->end3);
}

void	ft_freeimg(t_data *game, t_assets *assets)
{
	ft_despu(game, assets);
	ft_despl(game, assets);
	ft_despd(game, assets);
	ft_despr(game, assets);
	ft_deseu(game, assets);
	ft_desel(game, assets);
	ft_desed(game, assets);
	ft_deser(game, assets);
	ft_desass(game, assets);
}

int	ft_freeall(t_data *game)
{
	ft_freeimg(game, game->assets);
	if (game->map)
		free(game->map);
	if (game->win)
	{
		mlx_destroy_window(game->mlx, game->win);
		game->win = NULL;
	}
	if (game->mlx)
	{
		mlx_destroy_display(game->mlx);
		free(game->mlx);
	}
	if (game->assets)
		free(game->assets);
	if (game)
		free(game);
	exit (0);
}
