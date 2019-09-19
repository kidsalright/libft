/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_balance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:23:37 by yberries          #+#    #+#             */
/*   Updated: 2019/09/19 17:37:32 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			fixheight(t_avl_node *node)
{
	unsigned char	hl;
	unsigned char	hr;

	hl = HEIGHT(node->left);
	hr = HEIGHT(node->right);
	node->height = (hl > hr) ? (hl) : (hr) + 1;
}

static t_avl_node	*rotl(t_avl_node *node)
{
	t_avl_node		*tmp;

	tmp = node->right;
	node->right = tmp->left;
	tmp->left = node;
	fixheight(node);
	fixheight(tmp);
	return (tmp);
}

static t_avl_node	*rotr(t_avl_node *node)
{
	t_avl_node		*tmp;

	tmp = node->left;
	node->left = tmp->right;
	tmp->right = node;
	fixheight(node);
	fixheight(tmp);
	return (tmp);
}

static char			bfactor(t_avl_node *node)
{
	return (HEIGHT(node->right) - HEIGHT(node->left));
}

t_avl_node			*avl_balance(t_avl_node *node)
{
	char			b;

	fixheight(node);
	if ((b = bfactor(node)) == 2)
	{
		if (bfactor(node->right) < 0)
			node->right = rotr(node->right);
		return (rotl(node));
	}
	else if (b == -2)
	{
		if (bfactor(node->left) > 0)
			node->left = rotl(node->left);
		return (rotr(node));
	}
	return (node);
}
