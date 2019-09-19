/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:56:13 by yberries          #+#    #+#             */
/*   Updated: 2019/09/19 11:53:34 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int		ft_atoi(const char *str)
{
	char	sign;
	long	n;

	n = 0;
	sign = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '-' || *str == '+')
		sign = *str++ == '-';
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str++ - '0');
		if (n >= LONG_MAX && sign == 0)
			return ((int)LONG_MAX);
		if (n <= LONG_MIN)
			return ((int)LONG_MIN);
	}
	if (sign)
		return ((int)-n);
	return ((int)n);
}
