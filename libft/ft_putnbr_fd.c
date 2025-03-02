/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:08:05 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/02 19:17:39 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char	x;

	if (n == -2147483648)
	{
		write (fd, "-", 1);
		write(fd, "2147483648", 11);
	}
	else if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
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

/*int main(void)
{
	int n = -2147483648;
	ft_putnbr_fd(n, 1);
	return (0);
}*/
