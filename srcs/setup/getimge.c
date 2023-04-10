/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getimge.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:13:22 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 16:13:24 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup.h"

int	ft_getimgeu(t_data *game, t_assets *assets, int x, int y)
{
	assets->eu1 = mlx_xpm_file_to_image(game->mlx, "assets/eu1.xpm", &x, &y);
	if (!assets->eu1)
		return (1);
	assets->eu2 = mlx_xpm_file_to_image(game->mlx, "assets/eu2.xpm", &x, &y);
	if (!assets->eu2)
		return (1);
	assets->eu3 = mlx_xpm_file_to_image(game->mlx, "assets/eu3.xpm", &x, &y);
	if (!assets->eu3)
		return (1);
	assets->eu4 = mlx_xpm_file_to_image(game->mlx, "assets/eu4.xpm", &x, &y);
	if (!assets->eu4)
		return (1);
	assets->eu5 = mlx_xpm_file_to_image(game->mlx, "assets/eu5.xpm", &x, &y);
	if (!assets->eu5)
		return (1);
	assets->eu6 = mlx_xpm_file_to_image(game->mlx, "assets/eu6.xpm", &x, &y);
	if (!assets->eu6)
		return (1);
	assets->eu7 = mlx_xpm_file_to_image(game->mlx, "assets/eu7.xpm", &x, &y);
	if (!assets->eu7)
		return (1);
	assets->eu8 = mlx_xpm_file_to_image(game->mlx, "assets/eu8.xpm", &x, &y);
	if (!assets->eu8)
		return (1);
	return (0);
}

int	ft_getimgel(t_data *game, t_assets *assets, int x, int y)
{
	assets->el1 = mlx_xpm_file_to_image(game->mlx, "assets/el1.xpm", &x, &y);
	if (!assets->el1)
		return (1);
	assets->el2 = mlx_xpm_file_to_image(game->mlx, "assets/el2.xpm", &x, &y);
	if (!assets->el2)
		return (1);
	assets->el3 = mlx_xpm_file_to_image(game->mlx, "assets/el3.xpm", &x, &y);
	if (!assets->el3)
		return (1);
	assets->el4 = mlx_xpm_file_to_image(game->mlx, "assets/el4.xpm", &x, &y);
	if (!assets->el4)
		return (1);
	assets->el5 = mlx_xpm_file_to_image(game->mlx, "assets/el5.xpm", &x, &y);
	if (!assets->el5)
		return (1);
	assets->el6 = mlx_xpm_file_to_image(game->mlx, "assets/el6.xpm", &x, &y);
	if (!assets->el6)
		return (1);
	assets->el7 = mlx_xpm_file_to_image(game->mlx, "assets/el7.xpm", &x, &y);
	if (!assets->el7)
		return (1);
	assets->el8 = mlx_xpm_file_to_image(game->mlx, "assets/el8.xpm", &x, &y);
	if (!assets->el8)
		return (1);
	return (0);
}

int	ft_getimged(t_data *game, t_assets *assets, int x, int y)
{
	assets->ed1 = mlx_xpm_file_to_image(game->mlx, "assets/ed1.xpm", &x, &y);
	if (!assets->ed1)
		return (1);
	assets->ed2 = mlx_xpm_file_to_image(game->mlx, "assets/ed2.xpm", &x, &y);
	if (!assets->ed2)
		return (1);
	assets->ed3 = mlx_xpm_file_to_image(game->mlx, "assets/ed3.xpm", &x, &y);
	if (!assets->ed3)
		return (1);
	assets->ed4 = mlx_xpm_file_to_image(game->mlx, "assets/ed4.xpm", &x, &y);
	if (!assets->ed4)
		return (1);
	assets->ed5 = mlx_xpm_file_to_image(game->mlx, "assets/ed5.xpm", &x, &y);
	if (!assets->ed5)
		return (1);
	assets->ed6 = mlx_xpm_file_to_image(game->mlx, "assets/ed6.xpm", &x, &y);
	if (!assets->ed6)
		return (1);
	assets->ed7 = mlx_xpm_file_to_image(game->mlx, "assets/ed7.xpm", &x, &y);
	if (!assets->ed7)
		return (1);
	assets->ed8 = mlx_xpm_file_to_image(game->mlx, "assets/ed8.xpm", &x, &y);
	if (!assets->ed8)
		return (1);
	return (0);
}

int	ft_getimger(t_data *game, t_assets *assets, int x, int y)
{
	assets->er1 = mlx_xpm_file_to_image(game->mlx, "assets/er1.xpm", &x, &y);
	if (!assets->er1)
		return (1);
	assets->er2 = mlx_xpm_file_to_image(game->mlx, "assets/er2.xpm", &x, &y);
	if (!assets->er2)
		return (1);
	assets->er3 = mlx_xpm_file_to_image(game->mlx, "assets/er3.xpm", &x, &y);
	if (!assets->er3)
		return (1);
	assets->er4 = mlx_xpm_file_to_image(game->mlx, "assets/er4.xpm", &x, &y);
	if (!assets->er4)
		return (1);
	assets->er5 = mlx_xpm_file_to_image(game->mlx, "assets/er5.xpm", &x, &y);
	if (!assets->er5)
		return (1);
	assets->er6 = mlx_xpm_file_to_image(game->mlx, "assets/er6.xpm", &x, &y);
	if (!assets->pr6)
		return (1);
	assets->er7 = mlx_xpm_file_to_image(game->mlx, "assets/er7.xpm", &x, &y);
	if (!assets->er7)
		return (1);
	assets->er8 = mlx_xpm_file_to_image(game->mlx, "assets/er8.xpm", &x, &y);
	if (!assets->er8)
		return (1);
	return (0);
}

int	ft_getimge(t_data *game, t_assets *assets)
{
	if (ft_getimgeu(game, assets, 0, 0) == 1)
		return (1);
	if (ft_getimgel(game, assets, 0, 0) == 1)
		return (1);
	if (ft_getimged(game, assets, 0, 0) == 1)
		return (1);
	if (ft_getimger(game, assets, 0, 0) == 1)
		return (1);
	return (0);
}
