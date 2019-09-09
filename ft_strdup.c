/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 05:01:28 by yberries          #+#    #+#             */
/*   Updated: 2019/09/09 21:38:55 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	tmp = (char *)malloc(sizeof(*src) * (len + 1));
	if (tmp == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			tmp[i] = src[i];
			++i;
		}
		tmp[len] = '\0';
	}
	return (tmp);
}
