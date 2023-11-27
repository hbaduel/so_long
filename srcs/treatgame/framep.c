/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framep.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:57:16 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 14:57:18 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treatgame.h"

void	ft_framepu(t_data *game, t_assets *assets, int p)
{
	int	x;
	int	y;

	x = ft_x(game->map, p);
	y = ft_y(game->map, p);
	if (game->framep == 24000)
		game->framep = 0;
	if (game->framep < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu1, x, y);
	else if (game->framep < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu2, x, y);
	else if (game->framep < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu3, x, y);
	else if (game->framep < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu4, x, y);
	else if (game->framep < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu5, x, y);
	else if (game->framep < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu6, x, y);
	else if (game->framep < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu7, x, y);
	else if (game->framep < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pu8, x, y);
}

void	ft_framepl(t_data *game, t_assets *assets, int p)
{
	int	x;
	int	y;

	x = ft_x(game->map, p);
	y = ft_y(game->map, p);
	if (game->framep == 24000)
		game->framep = 0;
	if (game->framep < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl1, x, y);
	else if (game->framep < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl2, x, y);
	else if (game->framep < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl3, x, y);
	else if (game->framep < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl4, x, y);
	else if (game->framep < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl5, x, y);
	else if (game->framep < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl6, x, y);
	else if (game->framep < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl7, x, y);
	else if (game->framep < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pl8, x, y);
}

void	ft_framepd(t_data *game, t_assets *assets, int p)
{
	int	x;
	int	y;

	x = ft_x(game->map, p);
	y = ft_y(game->map, p);
	if (game->framep == 24000)
		game->framep = 0;
	if (game->framep < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd1, x, y);
	else if (game->framep < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd2, x, y);
	else if (game->framep < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd3, x, y);
	else if (game->framep < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd4, x, y);
	else if (game->framep < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd5, x, y);
	else if (game->framep < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd6, x, y);
	else if (game->framep < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd7, x, y);
	else if (game->framep < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pd8, x, y);
}

void	ft_framepr(t_data *game, t_assets *assets, int p)
{
	int	x;
	int	y;

	x = ft_x(game->map, p);
	y = ft_y(game->map, p);
	if (game->framep == 24000)
		game->framep = 0;
	if (game->framep < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr1, x, y);
	else if (game->framep < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr2, x, y);
	else if (game->framep < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr3, x, y);
	else if (game->framep < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr4, x, y);
	else if (game->framep < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr5, x, y);
	else if (game->framep < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr6, x, y);
	else if (game->framep < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr7, x, y);
	else if (game->framep < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->pr8, x, y);
}
