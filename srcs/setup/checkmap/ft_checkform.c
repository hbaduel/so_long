/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:43:08 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/17 14:43:20 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkmap.h"

int	ft_checkform(char *map)
{
	int	i;
	int	sizel;
	int	temp;
	int	lines;

	i = 0;
	lines = 0;
	temp = 0;
	sizel = 0;
	while (map[sizel] != '\n' && map[sizel])
		sizel++;
	while (map[i])
	{
		if (map[i] == '\n')
		{
			if ((i - temp) != sizel)
				return (1);
			temp = i + 1;
			lines++;
		}
		i++;
	}
	return (0);
}
