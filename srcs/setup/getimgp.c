/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getimgp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:08:25 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 16:08:27 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup.h"

int	ft_getimgpu(t_data *game, t_assets *assets, int x, int y)
{
	assets->pu1 = mlx_xpm_file_to_image(game->mlx, "assets/pu1.xpm", &x, &y);
	if (!assets->pu1)
		return (1);
	assets->pu2 = mlx_xpm_file_to_image(game->mlx, "assets/pu2.xpm", &x, &y);
	if (!assets->pu2)
		return (1);
	assets->pu3 = mlx_xpm_file_to_image(game->mlx, "assets/pu3.xpm", &x, &y);
	if (!assets->pu3)
		return (1);
	assets->pu4 = mlx_xpm_file_to_image(game->mlx, "assets/pu4.xpm", &x, &y);
	if (!assets->pu4)
		return (1);
	assets->pu5 = mlx_xpm_file_to_image(game->mlx, "assets/pu5.xpm", &x, &y);
	if (!assets->pu5)
		return (1);
	assets->pu6 = mlx_xpm_file_to_image(game->mlx, "assets/pu6.xpm", &x, &y);
	if (!assets->pu6)
		return (1);
	assets->pu7 = mlx_xpm_file_to_image(game->mlx, "assets/pu7.xpm", &x, &y);
	if (!assets->pu7)
		return (1);
	assets->pu8 = mlx_xpm_file_to_image(game->mlx, "assets/pu8.xpm", &x, &y);
	if (!assets->pu8)
		return (1);
	return (0);
}

int	ft_getimgpl(t_data *game, t_assets *assets, int x, int y)
{
	assets->pl1 = mlx_xpm_file_to_image(game->mlx, "assets/pl1.xpm", &x, &y);
	if (!assets->pl1)
		return (1);
	assets->pl2 = mlx_xpm_file_to_image(game->mlx, "assets/pl2.xpm", &x, &y);
	if (!assets->pl2)
		return (1);
	assets->pl3 = mlx_xpm_file_to_image(game->mlx, "assets/pl3.xpm", &x, &y);
	if (!assets->pl3)
		return (1);
	assets->pl4 = mlx_xpm_file_to_image(game->mlx, "assets/pl4.xpm", &x, &y);
	if (!assets->pl4)
		return (1);
	assets->pl5 = mlx_xpm_file_to_image(game->mlx, "assets/pl5.xpm", &x, &y);
	if (!assets->pl5)
		return (1);
	assets->pl6 = mlx_xpm_file_to_image(game->mlx, "assets/pl6.xpm", &x, &y);
	if (!assets->pl6)
		return (1);
	assets->pl7 = mlx_xpm_file_to_image(game->mlx, "assets/pl7.xpm", &x, &y);
	if (!assets->pl7)
		return (1);
	assets->pl8 = mlx_xpm_file_to_image(game->mlx, "assets/pl8.xpm", &x, &y);
	if (!assets->pl8)
		return (1);
	return (0);
}

int	ft_getimgpd(t_data *game, t_assets *assets, int x, int y)
{
	assets->pd1 = mlx_xpm_file_to_image(game->mlx, "assets/pd1.xpm", &x, &y);
	if (!assets->pd1)
		return (1);
	assets->pd2 = mlx_xpm_file_to_image(game->mlx, "assets/pd2.xpm", &x, &y);
	if (!assets->pd2)
		return (1);
	assets->pd3 = mlx_xpm_file_to_image(game->mlx, "assets/pd3.xpm", &x, &y);
	if (!assets->pd3)
		return (1);
	assets->pd4 = mlx_xpm_file_to_image(game->mlx, "assets/pd4.xpm", &x, &y);
	if (!assets->pd4)
		return (1);
	assets->pd5 = mlx_xpm_file_to_image(game->mlx, "assets/pd5.xpm", &x, &y);
	if (!assets->pd5)
		return (1);
	assets->pd6 = mlx_xpm_file_to_image(game->mlx, "assets/pd6.xpm", &x, &y);
	if (!assets->pd6)
		return (1);
	assets->pd7 = mlx_xpm_file_to_image(game->mlx, "assets/pd7.xpm", &x, &y);
	if (!assets->pd7)
		return (1);
	assets->pd8 = mlx_xpm_file_to_image(game->mlx, "assets/pd8.xpm", &x, &y);
	if (!assets->pd8)
		return (1);
	return (0);
}

int	ft_getimgpr(t_data *game, t_assets *assets, int x, int y)
{
	assets->pr1 = mlx_xpm_file_to_image(game->mlx, "assets/pr1.xpm", &x, &y);
	if (!assets->pr1)
		return (1);
	assets->pr2 = mlx_xpm_file_to_image(game->mlx, "assets/pr2.xpm", &x, &y);
	if (!assets->pr2)
		return (1);
	assets->pr3 = mlx_xpm_file_to_image(game->mlx, "assets/pr3.xpm", &x, &y);
	if (!assets->pr3)
		return (1);
	assets->pr4 = mlx_xpm_file_to_image(game->mlx, "assets/pr4.xpm", &x, &y);
	if (!assets->pr4)
		return (1);
	assets->pr5 = mlx_xpm_file_to_image(game->mlx, "assets/pr5.xpm", &x, &y);
	if (!assets->pr5)
		return (1);
	assets->pr6 = mlx_xpm_file_to_image(game->mlx, "assets/pr6.xpm", &x, &y);
	if (!assets->pr6)
		return (1);
	assets->pr7 = mlx_xpm_file_to_image(game->mlx, "assets/pr7.xpm", &x, &y);
	if (!assets->pr7)
		return (1);
	assets->pr8 = mlx_xpm_file_to_image(game->mlx, "assets/pr8.xpm", &x, &y);
	if (!assets->pr8)
		return (1);
	return (0);
}

int	ft_getimgp(t_data *game, t_assets *assets)
{
	if (ft_getimgpu(game, assets, 0, 0) == 1)
		return (1);
	if (ft_getimgpl(game, assets, 0, 0) == 1)
		return (1);
	if (ft_getimgpd(game, assets, 0, 0) == 1)
		return (1);
	if (ft_getimgpr(game, assets, 0, 0) == 1)
		return (1);
	return (0);
}
