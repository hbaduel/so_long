/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:50:41 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 14:50:43 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treatgame.h"

static void	ft_printnmove(t_data *game, t_assets *assets)
{
	char	*s;

	s = ft_itoa(game->nmove);
	if (!s)
		return ;
	if (game->nmove < 10)
		mlx_string_put(game->mlx, game->win, 32, 37, 0, s);
	else if (game->nmove < 100)
		mlx_string_put(game->mlx, game->win, 27, 37, 0, s);
	else if (game->nmove < 1000)
		mlx_string_put(game->mlx, game->win, 22, 37, 0, s);
	free(s);
}

static void	ft_printcollect(t_data *game, t_assets *assets, char *s1)
{
	char	*s2;

	if (!s1)
		return ;
	s2 = ft_strdup(" / ");
	if (!s2)
	{
		free(s1);
		return ;
	}
	s1 = ft_strjoin(s1, s2);
	if (!s1)
		return ;
	s2 = ft_itoa(game->tc);
	if (!s2)
	{
		free(s1);
		return ;
	}
	s1 = ft_strjoin(s1, s2);
	if (!s1)
		return ;
	mlx_string_put(game->mlx, game->win, 75, 37, 0, s1);
	free(s1);
}

void	ft_printstats(t_data *game, t_assets *assets)
{
	mlx_put_image_to_window(game->mlx, game->win, assets->sb, 0, 0);
	ft_printnmove(game, assets);
	ft_printcollect(game, assets, ft_itoa(game->nc));
}
