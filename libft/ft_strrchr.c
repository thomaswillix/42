/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:49:14 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/25 20:54:08 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	size_t	str_len;

	str_len = ft_strlen(str);
	if (search_str == '\0')
		return ((char *)str + str_len);
	while (str_len > 0)
	{
		if (str[str_len - 1] == search_str)
			return ((char *) str + str_len - 1);
		str_len--;
	}
	return (NULL);
}
