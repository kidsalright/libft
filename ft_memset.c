/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:14:07 by yberries          #+#    #+#             */
/*   Updated: 2019/09/09 21:48:02 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t len)
{
	unsigned char *c;

	c = str;
	while (len)
	{
		*c = val;
		++c;
		--len;
	}
	return (str);
}
