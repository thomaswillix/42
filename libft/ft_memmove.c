/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:57:36 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/31 21:04:20 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
