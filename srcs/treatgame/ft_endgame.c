/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closeprogram.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 01:02:37 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/21 01:05:49 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treatgame.h"

void	ft_endgame(t_data *game, t_assets *assets, int end)
{
	game->finishstatus = 1;
	mlx_destroy_window(game->mlx, game->win);
	game->win = mlx_new_window(game->mlx, 1000, 1000, "so_long");
	if (end == 1)
		mlx_put_image_to_window(game->mlx, game->win, assets->end1, 0, 0);
	else if (end == 2)
		mlx_put_image_to_window(game->mlx, game->win, assets->end2, 0, 0);
	else if (end == 3)
		mlx_put_image_to_window(game->mlx, game->win, assets->end3, 0, 0);
	mlx_hook(game->win, 2, 1L << 0, ft_treatmove, game);
	mlx_hook(game->win, 17, 1L << 0, ft_freeall, game);
}
