/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:24:41 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/09 21:17:15 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	i = ft_strlen(src);
	res = i;
    // Copiar hasta 'size - 1' caracteres de 'src' a 'dest', dejando espacio para el terminador nulo
    i = 0;
    while (i < size - 1 && src[i])  // Copiar hasta el tamaño especificado o el final de 'src'
    {
        dest[i] = src[i];
        i++;
    }
	dest[i] = '\0';

    return (res);
}