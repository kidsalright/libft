/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_create_tree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:11:55 by yberries          #+#    #+#             */
/*   Updated: 2019/09/19 13:14:32 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_avl_tree	*avl_create_tree(int (*cmp)(t_avl_node *a, t_avl_node *b))
{
	t_avl_tree	*tmp;

	if ((tmp = malloc(sizeof(*tmp))))
	{
		tmp->n = 0;
		tmp->root = NULL;
		tmp->cmp = cmp;
	}
	return (tmp);
}
