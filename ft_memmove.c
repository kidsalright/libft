/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:10:57 by yberries          #+#    #+#             */
/*   Updated: 2019/09/09 21:27:08 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char 		*dest;
	const char	*source;
	size_t		i;

	i = 0;
	dest = (char *)dst;
	source = (const char *)src;
	if (dest > source)
	{
		i = n;
		while (i > 0)
		{
			dest[i - 1] = source[i - 1];
			--i;
		}
	}
	else
		ft_memcpy(dest, source, len);
	return (dst);
}
