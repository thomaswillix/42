/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:27:00 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/09 14:04:59 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memmove() function copies n bytes from memory area src to memory area dest.
 The memory areas may overlap: copying takes place as though the bytes in src are
 first copied into a temporary array that does not overlap src or dest, and the 
 bytes are then copied from the temporary array to dest.*/

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (d > s)
	{
		/* Comparación en la que se tiene en cuenta el valor y después se modifica
		 por lo que la condición de entrada es si N > 0 para después decrementar N 
		 y dentro del bucle operar con N-1 */
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}