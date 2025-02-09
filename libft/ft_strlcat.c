/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:06:11 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/09 22:14:04 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
    size_t	src_len;
	size_t	res;

	i = 0;
	j = 0;
	dest_len = 0;
	src_len = 0;
    while (dest[dest_len] && dest_len < size)
        dest_len++;
    while (src[src_len])
        src_len++;
    if (size <= dest_len)
        return (size + src_len);
    while (src[j] && dest_len + j < size - 1)
    {
        dest[dest_len + j] = src[j];
        j++;
    }
    dest[dest_len + j] = '\0';
    res = dest_len + src_len;
    return (res);
}