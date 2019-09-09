/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:24:12 by yberries          #+#    #+#             */
/*   Updated: 2019/09/09 20:03:33 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dest;
	const char *s;

	dest = dst;
	s = src;
	while (n--)
	{
		*dest = *s;
		++dest;
		++s;
	}
	return (dst);
}
