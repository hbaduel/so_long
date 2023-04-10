/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framee.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:33:47 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 15:33:53 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treatgame.h"

void	ft_frameeu(t_data *game, t_assets *assets, int n)
{
	int	x;
	int	y;

	x = ft_x(game->map, n);
	y = ft_y(game->map, n);
	if (game->framee == 24000)
		game->framee = 0;
	if (game->framee < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu1, x, y);
	else if (game->framee < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu2, x, y);
	else if (game->framee < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu3, x, y);
	else if (game->framee < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu4, x, y);
	else if (game->framee < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu5, x, y);
	else if (game->framee < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu6, x, y);
	else if (game->framee < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu7, x, y);
	else if (game->framee < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->eu8, x, y);
}

void	ft_frameel(t_data *game, t_assets *assets, int n)
{
	int	x;
	int	y;

	x = ft_x(game->map, n);
	y = ft_y(game->map, n);
	if (game->framee == 24000)
		game->framee = 0;
	if (game->framee < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el1, x, y);
	else if (game->framee < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el2, x, y);
	else if (game->framee < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el3, x, y);
	else if (game->framee < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el4, x, y);
	else if (game->framee < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el5, x, y);
	else if (game->framee < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el6, x, y);
	else if (game->framee < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el7, x, y);
	else if (game->framee < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->el8, x, y);
}

void	ft_frameed(t_data *game, t_assets *assets, int n)
{
	int	x;
	int	y;

	x = ft_x(game->map, n);
	y = ft_y(game->map, n);
	if (game->framee == 24000)
		game->framee = 0;
	if (game->framee < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed1, x, y);
	else if (game->framee < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed2, x, y);
	else if (game->framee < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed3, x, y);
	else if (game->framee < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed4, x, y);
	else if (game->framee < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed5, x, y);
	else if (game->framee < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed6, x, y);
	else if (game->framee < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed7, x, y);
	else if (game->framee < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->ed8, x, y);
}

void	ft_frameer(t_data *game, t_assets *assets, int n)
{
	int	x;
	int	y;

	x = ft_x(game->map, n);
	y = ft_y(game->map, n);
	if (game->framee == 24000)
		game->framee = 0;
	if (game->framee < 3000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er1, x, y);
	else if (game->framee < 6000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er2, x, y);
	else if (game->framee < 9000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er3, x, y);
	else if (game->framee < 12000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er4, x, y);
	else if (game->framee < 15000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er5, x, y);
	else if (game->framee < 18000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er6, x, y);
	else if (game->framee < 21000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er7, x, y);
	else if (game->framee < 24000)
		mlx_put_image_to_window(game->mlx, game->win, assets->er8, x, y);
}
