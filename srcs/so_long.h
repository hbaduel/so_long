/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:49:07 by hbaduel           #+#    #+#             */
/*   Updated: 2023/03/06 20:00:45 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../includes/mlx/mlx.h"
# include "../includes/mlx/mlx_int.h"
# include <time.h>

typedef struct s_assets {
	void	*pu1;
	void	*pu2;
	void	*pu3;
	void	*pu4;
	void	*pu5;
	void	*pu6;
	void	*pu7;
	void	*pu8;
	void	*pl1;
	void	*pl2;
	void	*pl3;
	void	*pl4;
	void	*pl5;
	void	*pl6;
	void	*pl7;
	void	*pl8;
	void	*pd1;
	void	*pd2;
	void	*pd3;
	void	*pd4;
	void	*pd5;
	void	*pd6;
	void	*pd7;
	void	*pd8;
	void	*pr1;
	void	*pr2;
	void	*pr3;
	void	*pr4;
	void	*pr5;
	void	*pr6;
	void	*pr7;
	void	*pr8;
	void	*eu1;
	void	*eu2;
	void	*eu3;
	void	*eu4;
	void	*eu5;
	void	*eu6;
	void	*eu7;
	void	*eu8;
	void	*el1;
	void	*el2;
	void	*el3;
	void	*el4;
	void	*el5;
	void	*el6;
	void	*el7;
	void	*el8;
	void	*ed1;
	void	*ed2;
	void	*ed3;
	void	*ed4;
	void	*ed5;
	void	*ed6;
	void	*ed7;
	void	*ed8;
	void	*er1;
	void	*er2;
	void	*er3;
	void	*er4;
	void	*er5;
	void	*er6;
	void	*er7;
	void	*er8;
	void	*ground;
	void	*c0;
	void	*c1;
	void	*c2;
	void	*exitc;
	void	*exito;
	void	*wall;
	void	*sb;
	void	*end1;
	void	*end2;
	void	*end3;
}		t_assets;

typedef struct s_data {
	t_assets	*assets;
	void		*mlx;
	void		*win;
	char		*map;
	char		pd;
	char		ed;
	int			tc;
	int			nc;
	int			exitstatus;
	int			nmove;
	int			framep;
	int			framee;
	int			framef;
	int			isennemy;
	int			finishstatus;
}		t_data;

void	ft_createmap(t_data *game, t_assets *assets, int x, int y);
void	ft_putstr(const char *s);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_itoa(int n);
int		ft_setup(int argc, char **argv, t_data **game);
int		ft_strchr(char *map, char c);
int		ft_sizeline(char *map);
int		ft_strlen(char *s);
int		ft_xwin(char *map);
int		ft_ywin(char *map);
int		ft_treatmove(int code, t_data *game);
int		ft_x(char *map, int pos);
int		ft_y(char *map, int pos);
int		ft_nc(char *map);
int		ft_checkparound(char *map, int ennemy);
int		ft_manageframe(t_data *game);
int		ft_freeall(t_data *game);

#endif
