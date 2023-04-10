/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:38:24 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/17 14:41:31 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKMAP_H
# define CHECKMAP_H

# include "../setup.h"

int		ft_checkform(char *map);
int		ft_checkelements(char *map);
int		ft_checkwall(char *map);
int		ft_checkpath(char *map);

#endif
