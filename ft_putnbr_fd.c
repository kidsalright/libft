/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberries <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:20:27 by yberries          #+#    #+#             */
/*   Updated: 2019/09/09 21:33:29 by yberries         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	int div;

	div = nb / 10;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (div)
			ft_putnbr_fd(-div, fd);
		ft_putchar_fd((-(nb % 10) + '0'), fd);
	}
	else
	{
		if (div)
			ft_putnbr_fd(div, fd);
		ft_putchar_fd(((nb % 10) + '0'), fd);
	}
}
