/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:31:59 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 16:34:58 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup.h"

void	ft_setdata(t_data *game)
{
	game->nc = 0;
	game->exitstatus = 1;
	game->nmove = 0;
	game->framep = 0;
	game->framee = 0;
	game->finishstatus = 0;
	game->isennemy = 0;
	game->framef = 0;
	game->pd = 'D';
	game->ed = 'D';
	game->win = NULL;
}

int	ft_setstructs(t_data *game)
{
	game->assets = malloc(sizeof(t_assets));
	if (!game->assets)
	{
		ft_putstr("Error : MALLOC ERROR.\n");
		game->assets = NULL;
		return (1);
	}
	game->mlx = mlx_init();
	if (!game->mlx)
	{
		ft_putstr("Error : MLX ERROR.\nmlx_init failed.\n");
		game->mlx = NULL;
		return (1);
	}
	ft_setdata(game);
	ft_setptrnull(game->assets);
	return (0);
}

int	ft_setmap(int argc, char **argv, t_data *game)
{
	if (argc != 2)
	{
		if (argc > 2)
			ft_putstr("Error : TOO MANY ARGUMENTS.\n");
		else
			ft_putstr("Error : NO ARGUMENT.\nPlease select a map.\n");
		game->map = NULL;
		return (1);
	}
	game->map = ft_readmap(argv[1]);
	if (ft_checkmap(game->map) == 1)
		return (1);
	game->tc = ft_nc(game->map);
	ft_setennemy(game);
	if (game->isennemy == 0)
		ft_putstr("INFORMATION : Ennemy hasn't been placed because your map\
is considered too small.\n");
	return (0);
}

int	ft_setup(int argc, char **argv, t_data **game)
{
	*game = malloc(sizeof(t_data));
	if (!*game)
	{
		ft_putstr("Error : MALLOC ERROR.\n");
		*game = NULL;
		return (1);
	}
	if (ft_setstructs(*game) == 1)
		return (1);
	if (ft_setmap(argc, argv, *game) == 1)
		return (1);
	if (ft_getimg(*game, game[0]->assets) == 1)
	{
		ft_putstr("Error : ASSET ERROR.\nYour asset doesn't exist or \
can't be opened.\n");
		return (1);
	}
	return (0);
}
