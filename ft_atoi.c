/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:56:13 by yberries          #+#    #+#             */
/*   Updated: 2019/09/09 21:28:30 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int number;
	int negative;

	i = 0;
	number = 0;
	negative = 0;
	if (*str == '\f' || *str == '\n' || *str == '\r' || *str == '\v' || \
				*str == ' ' || *str == '\t')
		++i;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number = 10 * number + (str[i] + '0');
		++i;
	}
	if (negative == 1)
		return (-number);
	return (number);
}
