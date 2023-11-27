/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroypassets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:20:46 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/30 17:21:31 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"

void	ft_despu(t_data *game, t_assets *assets)
{
	if (assets->pu1)
		mlx_destroy_image(game->mlx, assets->pu1);
	if (assets->pu2)
		mlx_destroy_image(game->mlx, assets->pu2);
	if (assets->pu3)
		mlx_destroy_image(game->mlx, assets->pu3);
	if (assets->pu4)
		mlx_destroy_image(game->mlx, assets->pu4);
	if (assets->pu5)
		mlx_destroy_image(game->mlx, assets->pu5);
	if (assets->pu6)
		mlx_destroy_image(game->mlx, assets->pu6);
	if (assets->pu7)
		mlx_destroy_image(game->mlx, assets->pu7);
	if (assets->pu8)
		mlx_destroy_image(game->mlx, assets->pu8);
}

void	ft_despl(t_data *game, t_assets *assets)
{
	if (assets->pl1)
		mlx_destroy_image(game->mlx, assets->pl1);
	if (assets->pl2)
		mlx_destroy_image(game->mlx, assets->pl2);
	if (assets->pl3)
		mlx_destroy_image(game->mlx, assets->pl3);
	if (assets->pl4)
		mlx_destroy_image(game->mlx, assets->pl4);
	if (assets->pl5)
		mlx_destroy_image(game->mlx, assets->pl5);
	if (assets->pl6)
		mlx_destroy_image(game->mlx, assets->pl6);
	if (assets->pl7)
		mlx_destroy_image(game->mlx, assets->pl7);
	if (assets->pl8)
		mlx_destroy_image(game->mlx, assets->pl8);
}

void	ft_despd(t_data *game, t_assets *assets)
{
	if (assets->pd1)
		mlx_destroy_image(game->mlx, assets->pd1);
	if (assets->pd2)
		mlx_destroy_image(game->mlx, assets->pd2);
	if (assets->pd3)
		mlx_destroy_image(game->mlx, assets->pd3);
	if (assets->pd4)
		mlx_destroy_image(game->mlx, assets->pd4);
	if (assets->pd5)
		mlx_destroy_image(game->mlx, assets->pd5);
	if (assets->pd6)
		mlx_destroy_image(game->mlx, assets->pd6);
	if (assets->pd7)
		mlx_destroy_image(game->mlx, assets->pd7);
	if (assets->pd8)
		mlx_destroy_image(game->mlx, assets->pd8);
}

void	ft_despr(t_data *game, t_assets *assets)
{
	if (assets->pr1)
		mlx_destroy_image(game->mlx, assets->pr1);
	if (assets->pr2)
		mlx_destroy_image(game->mlx, assets->pr2);
	if (assets->pr3)
		mlx_destroy_image(game->mlx, assets->pr3);
	if (assets->pr4)
		mlx_destroy_image(game->mlx, assets->pr4);
	if (assets->pr5)
		mlx_destroy_image(game->mlx, assets->pr5);
	if (assets->pr6)
		mlx_destroy_image(game->mlx, assets->pr6);
	if (assets->pr7)
		mlx_destroy_image(game->mlx, assets->pr7);
	if (assets->pr8)
		mlx_destroy_image(game->mlx, assets->pr8);
}
