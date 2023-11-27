/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:17:07 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/08 18:37:10 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup.h"

char	*ft_removereturnline(char *map)
{
	char	*temp;
	int		i;
	int		j;	

	i = 0;
	if (map[0] == '\0')
		return (map);
	while (map[i + 1])
		i++;
	if (map[i] == '\n')
	{
		temp = malloc(sizeof(char) * (i + 1));
		if (!temp)
			return (NULL);
		j = 0;
		while (j < i)
		{
			temp[j] = map[j];
			j++;
		}
		temp[j] = '\0';
		free(map);
		return (temp);
	}
	return (map);
}

int	ft_read(int fd, char *temp)
{
	int	nread;

	if (!temp)
		return (1);
	nread = read(fd, temp, 10);
	if (nread <= 0)
	{
		free(temp);
		return (nread);
	}
	temp[nread] = '\0';
	return (nread);
}

char	*ft_malloc(int size)
{
	char	*temp;

	temp = malloc(sizeof(char) * size);
	if (!temp)
		return (NULL);
	temp[size - 1] = '\0';
	return (temp);
}	

char	*ft_erclosefd(int fd, char *map, char *temp)
{
	if (temp)
		free(temp);
	if (map)
		free(map);
	close(fd);
	return (NULL);
}

char	*ft_readmap(char *mapname)
{
	char	*map;
	char	*temp;
	int		fd;

	fd = open(mapname, O_RDONLY);
	if (fd < 0)
		return (NULL);
	map = ft_malloc(1);
	if (!map)
		return (ft_erclosefd(fd, map, temp));
	temp = malloc(sizeof(char) * 11);
	if (!temp)
		return (ft_erclosefd(fd, map, temp));
	while (ft_read(fd, temp) > 0)
	{
		map = ft_strjoin(map, temp);
		if (!map)
			return (ft_erclosefd(fd, map, temp));
		temp = malloc(sizeof(char) * 11);
		if (!temp)
			return (ft_erclosefd(fd, map, temp));
	}
	close(fd);
	return (ft_removereturnline(map));
}
