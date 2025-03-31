/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:42:02 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/31 21:08:23 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] && to_find[j] && i + j < n)
		{
			if (!to_find[j + 1])
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (0);
}
