/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:16:03 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/20 22:36:32 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data		*game;

	if (ft_setup(argc, argv, &game) == 1)
		ft_freeall(game);
	game->win = mlx_new_window(game->mlx, ft_xwin(game->map), \
						ft_ywin(game->map), "so_long");
	ft_createmap(game, game->assets, 192, 0);
	mlx_loop_hook(game->mlx, ft_manageframe, game);
	mlx_hook(game->win, 2, 1L << 0, ft_treatmove, game);
	mlx_hook(game->win, 17, 1L << 0, ft_freeall, game);
	mlx_loop(game->mlx);
	return (0);
}
