/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:41:48 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/31 21:07:17 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *) s1;
	str2 = (char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
