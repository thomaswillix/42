/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:21:27 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/31 21:04:45 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	while (dest[i] && i < size - 1)
		i++;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}
