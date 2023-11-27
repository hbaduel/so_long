/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:25:30 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/08 18:37:23 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup.h"

int	ft_getimgtwo(t_data *g, t_assets *a)
{
	int	x;
	int	y;

	a->exitc = mlx_xpm_file_to_image(g->mlx, "assets/exitc.xpm", &x, &y);
	if (!a->exitc)
		return (1);
	a->exito = mlx_xpm_file_to_image(g->mlx, "assets/exito.xpm", &x, &y);
	if (!a->exito)
		return (1);
	a->wall = mlx_xpm_file_to_image(g->mlx, "assets/wall.xpm", &x, &y);
	if (!a->wall)
		return (1);
	a->sb = mlx_xpm_file_to_image(g->mlx, "assets/sb.xpm", &x, &y);
	if (!a->sb)
		return (1);
	a->end1 = mlx_xpm_file_to_image(g->mlx, "assets/end1.xpm", &x, &y);
	if (!a->end1)
		return (1);
	a->end2 = mlx_xpm_file_to_image(g->mlx, "assets/end2.xpm", &x, &y);
	if (!a->end2)
		return (1);
	a->end3 = mlx_xpm_file_to_image(g->mlx, "assets/end3.xpm", &x, &y);
	if (!a->end3)
		return (1);
}

int	ft_getimg(t_data *g, t_assets *a)
{
	int		x;
	int		y;

	if (ft_getimgp(g, a) == 1)
		return (1);
	if (ft_getimge(g, a) == 1)
		return (1);
	if (ft_getimgtwo(g, a) == 1)
		return (1);
	a->ground = mlx_xpm_file_to_image(g->mlx, "assets/ground.xpm", &x, &y);
	if (!a->ground)
		return (1);
	a->c0 = mlx_xpm_file_to_image(g->mlx, "assets/c0.xpm", &x, &y);
	if (!a->c0)
		return (1);
	a->c1 = mlx_xpm_file_to_image(g->mlx, "assets/c1.xpm", &x, &y);
	if (!a->c1)
		return (1);
	a->c2 = mlx_xpm_file_to_image(g->mlx, "assets/c2.xpm", &x, &y);
	if (!a->c2)
		return (1);
	return (0);
}
