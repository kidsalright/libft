/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:56:13 by yberries          #+#    #+#             */
/*   Updated: 2019/09/11 14:33:49 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	long	number;
	char	negative;
	char	*s;

	s = ft_strdup(str);
	i = 0;
	number = 0;
	negative = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-')
		negative = -1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (ft_isdigit(s[i]))
	{
		number = 10 * number + (s[i] - '0');
		i++;
	}
	if (negative == -1)
		return ((int)number * negative);
	return ((int)number);
}
