/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:21:13 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/02 19:35:50 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd);

void ft_putendl_fd(char *s, int fd)
{
	char	end_l;

	end_l = '\n';
	ft_putstr_fd(s, fd);

	write(fd, &end_l, 1);
}

/*int main ()
{
	char *str = "Hola, mundo!"; 
	ft_putendl_fd(str, 1);
	return (0);
}*/