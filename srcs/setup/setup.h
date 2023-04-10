/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:25:51 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 17:26:28 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SETUP_H
# define SETUP_H

# include "../so_long.h"

void	ft_setennemy(t_data *game);
void	ft_setptrnull(t_assets *assets);
char	*ft_readmap(char *mapname);
int		ft_getimg(t_data *g, t_assets *a);
int		ft_getimgp(t_data *game, t_assets *assets);
int		ft_getimge(t_data *game, t_assets *assets);
int		ft_checkmap(char *map);

#endif
