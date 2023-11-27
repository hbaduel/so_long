/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatgame.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:57:43 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/20 23:59:39 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREATGAME_H
# define TREATGAME_H

# include "../so_long.h"

void	ft_move(t_data *g, char dir, int p, int newpos);
void	ft_endgame(t_data *game, t_assets *assets, int end);
void	ft_printstats(t_data *game, t_assets *assets);
void	ft_framepu(t_data *game, t_assets *assets, int p);
void	ft_framepl(t_data *game, t_assets *assets, int p);
void	ft_framepd(t_data *game, t_assets *assets, int p);
void	ft_framepr(t_data *game, t_assets *assets, int p);
void	ft_frameeu(t_data *game, t_assets *assets, int n);
void	ft_frameel(t_data *game, t_assets *assets, int n);
void	ft_frameed(t_data *game, t_assets *assets, int n);
void	ft_frameer(t_data *game, t_assets *assets, int n);

#endif
