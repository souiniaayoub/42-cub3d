/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:55:48 by ncolomer          #+#    #+#             */
/*   Updated: 2019/10/31 22:25:06 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void
	set_pos(t_pos *pos, int x, int y)
{
	pos->x = x;
	pos->y = y;
}

void
	copy_pos(t_pos *pos, t_pos *org)
{
	pos->x = org->x;
	pos->y = org->y;
}