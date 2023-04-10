/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroyeassets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:22:48 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/30 17:23:57 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void	ft_deseu(t_data *game, t_assets *assets)
{
	if (assets->eu1)
		mlx_destroy_image(game->mlx, assets->eu1);
	if (assets->eu2)
		mlx_destroy_image(game->mlx, assets->eu2);
	if (assets->eu3)
		mlx_destroy_image(game->mlx, assets->eu3);
	if (assets->eu4)
		mlx_destroy_image(game->mlx, assets->eu4);
	if (assets->eu5)
		mlx_destroy_image(game->mlx, assets->eu5);
	if (assets->eu6)
		mlx_destroy_image(game->mlx, assets->eu6);
	if (assets->eu7)
		mlx_destroy_image(game->mlx, assets->eu7);
	if (assets->eu8)
		mlx_destroy_image(game->mlx, assets->eu8);
}

void	ft_desel(t_data *game, t_assets *assets)
{
	if (assets->el1)
		mlx_destroy_image(game->mlx, assets->el1);
	if (assets->el2)
		mlx_destroy_image(game->mlx, assets->el2);
	if (assets->el3)
		mlx_destroy_image(game->mlx, assets->el3);
	if (assets->el4)
		mlx_destroy_image(game->mlx, assets->el4);
	if (assets->el5)
		mlx_destroy_image(game->mlx, assets->el5);
	if (assets->el6)
		mlx_destroy_image(game->mlx, assets->el6);
	if (assets->el7)
		mlx_destroy_image(game->mlx, assets->el7);
	if (assets->el8)
		mlx_destroy_image(game->mlx, assets->el8);
}

void	ft_desed(t_data *game, t_assets *assets)
{
	if (assets->ed1)
		mlx_destroy_image(game->mlx, assets->ed1);
	if (assets->ed2)
		mlx_destroy_image(game->mlx, assets->ed2);
	if (assets->ed3)
		mlx_destroy_image(game->mlx, assets->ed3);
	if (assets->ed4)
		mlx_destroy_image(game->mlx, assets->ed4);
	if (assets->ed5)
		mlx_destroy_image(game->mlx, assets->ed5);
	if (assets->ed6)
		mlx_destroy_image(game->mlx, assets->ed6);
	if (assets->ed7)
		mlx_destroy_image(game->mlx, assets->ed7);
	if (assets->ed8)
		mlx_destroy_image(game->mlx, assets->ed8);
}

void	ft_deser(t_data *game, t_assets *assets)
{
	if (assets->er1)
		mlx_destroy_image(game->mlx, assets->er1);
	if (assets->er2)
		mlx_destroy_image(game->mlx, assets->er2);
	if (assets->er3)
		mlx_destroy_image(game->mlx, assets->er3);
	if (assets->er4)
		mlx_destroy_image(game->mlx, assets->er4);
	if (assets->er5)
		mlx_destroy_image(game->mlx, assets->er5);
	if (assets->er6)
		mlx_destroy_image(game->mlx, assets->er6);
	if (assets->er7)
		mlx_destroy_image(game->mlx, assets->er7);
	if (assets->er8)
		mlx_destroy_image(game->mlx, assets->er8);
}
