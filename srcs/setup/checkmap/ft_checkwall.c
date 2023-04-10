/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkwall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:40:57 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/17 14:41:15 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkmap.h"

int	ft_checkwall(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
	{
		if (map[i] != '1')
			return (1);
		i++;
	}
	while (map[i])
	{
		if (map[i] == '\n' && (map[i + 1] != '1' || map[i - 1] != '1'))
			return (1);
		i++;
	}
	while (map[i - 1] != '\n')
		i--;
	while (map[i])
	{
		if (map[i] != '1')
			return (1);
		i++;
	}
	return (0);
}
