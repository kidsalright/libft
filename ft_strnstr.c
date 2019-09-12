/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:51:28 by yberries          #+#    #+#             */
/*   Updated: 2019/09/13 00:10:23 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t pos;
	size_t res;
	size_t i;

	if (*s2 == '\0')
		return ((char *)s1);
	pos = 0;
	while (*(s1 + pos) && len > pos)
	{
		res = pos;
		i = 0;
		while (*(s2 + i) == *(s1 + res) && *(s2 + i) && pos + i < len)
		{
			++res;
			++i;
		}
		if (*(s2 + i) == '\0')
			return ((char *)(s1 + pos));
		++pos;
	}
	return (NULL);
}
