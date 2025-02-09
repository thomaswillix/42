/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:10:14 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/09 13:43:41 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	/* Punteros, no podemos acceder a las propias dest y src dest y src están
	 definidos como void *, lo que significa que son punteros genéricos. Para
	 poder operar con ellos, necesitamos convertirlos a punteros de un tipo
	 concreto (como unsigned char *) porque void * no tiene un tamaño definido.

	 El tipo void * no permite el acceso a los datos como un array directamente
	 porque no sabe cuántos bytes ocupa la memoria. La conversión a un tipo 
	 específico (como unsigned char *) es esencial para que puedas trabajar con
	 los datos byte a byte.*/
	unsigned char	*d; 
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}