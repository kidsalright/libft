/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:56:10 by yberries          #+#    #+#             */
/*   Updated: 2019/09/09 20:10:44 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*s;

	dest = (unsigned char *) = dst;
	s = (unsigned char *) = s;
	c = (unsigned char) c;
	while (n--)
		{
			if ((*dest = s) == c)
				return (dest);
		}
	return (NULL);
}
