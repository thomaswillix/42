/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:19:30 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/25 19:44:36 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	x;

	if (n == -2147483648)
	{
		write(fd "-2147483648", 11);
	}
	else if (n < 0)
	{
		n *= -1;
		write(1, '-', 1);
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		x = (n % 10) + '0';
		write(fd, &x, 1);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		x = (n % 10) + '0';
		write(fd, &x, 1);
	}
}
