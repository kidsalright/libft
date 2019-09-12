/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:51:28 by yberries          #+#    #+#             */
/*   Updated: 2019/09/12 23:26:49 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t pos;
	size_t res;
	size_t i;

	if (*needle == '\0')
		return ((char *)haystack);
	pos = 0;
	while (*(haystack + pos) && len-- > 0 && pos < len)
	{
		res = pos;
		i = 0;
		while (*(needle + i) == *(haystack + res) && *(needle + i))
		{
			++res;
			++i;
		}
		if (*(needle + i) == '\0')
			return ((char *)(haystack + pos));
		++pos;
	}
	return (NULL);
}
