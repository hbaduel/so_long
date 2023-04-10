/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setptrnull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:56:59 by hbaduel           #+#    #+#             */
/*   Updated: 2023/04/03 16:57:01 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup.h"

void	ft_setptrnullfour(t_assets *assets)
{
	assets->end1 = NULL;
	assets->end2 = NULL;
	assets->end3 = NULL;
}

void	ft_setptrnullthree(t_assets *assets)
{
	assets->ed1 = NULL;
	assets->ed2 = NULL;
	assets->ed3 = NULL;
	assets->ed4 = NULL;
	assets->ed5 = NULL;
	assets->ed6 = NULL;
	assets->ed7 = NULL;
	assets->ed8 = NULL;
	assets->er1 = NULL;
	assets->er2 = NULL;
	assets->er3 = NULL;
	assets->er4 = NULL;
	assets->er5 = NULL;
	assets->er6 = NULL;
	assets->er7 = NULL;
	assets->er8 = NULL;
	assets->ground = NULL;
	assets->c0 = NULL;
	assets->c1 = NULL;
	assets->c2 = NULL;
	assets->exitc = NULL;
	assets->exito = NULL;
	assets->wall = NULL;
	assets->sb = NULL;
	ft_setptrnullfour(assets);
}

void	ft_setptrnulltwo(t_assets *assets)
{
	assets->pr1 = NULL;
	assets->pr2 = NULL;
	assets->pr3 = NULL;
	assets->pr4 = NULL;
	assets->pr5 = NULL;
	assets->pr6 = NULL;
	assets->pr7 = NULL;
	assets->pr8 = NULL;
	assets->eu1 = NULL;
	assets->eu2 = NULL;
	assets->eu3 = NULL;
	assets->eu4 = NULL;
	assets->eu5 = NULL;
	assets->eu6 = NULL;
	assets->eu7 = NULL;
	assets->eu8 = NULL;
	assets->el1 = NULL;
	assets->el2 = NULL;
	assets->el3 = NULL;
	assets->el4 = NULL;
	assets->el5 = NULL;
	assets->el6 = NULL;
	assets->el7 = NULL;
	assets->el8 = NULL;
	ft_setptrnullthree(assets);
}

void	ft_setptrnull(t_assets *assets)
{
	assets->pu1 = NULL;
	assets->pu2 = NULL;
	assets->pu3 = NULL;
	assets->pu4 = NULL;
	assets->pu5 = NULL;
	assets->pu6 = NULL;
	assets->pu7 = NULL;
	assets->pu8 = NULL;
	assets->pl1 = NULL;
	assets->pl2 = NULL;
	assets->pl3 = NULL;
	assets->pl4 = NULL;
	assets->pl5 = NULL;
	assets->pl6 = NULL;
	assets->pl7 = NULL;
	assets->pl8 = NULL;
	assets->pd1 = NULL;
	assets->pd2 = NULL;
	assets->pd3 = NULL;
	assets->pd4 = NULL;
	assets->pd5 = NULL;
	assets->pd6 = NULL;
	assets->pd7 = NULL;
	assets->pd8 = NULL;
	ft_setptrnulltwo(assets);
}
