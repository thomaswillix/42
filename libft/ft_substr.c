/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:12:15 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/26 19:03:24 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_res;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	str_res = (char *) malloc(sizeof(*s) * (len + 1));
	if (!str_res)
		return (NULL);
	while (s[i] && j < len)
	{
		str_res[j] = s[i];
		j++;
		i++;
	}
	return (str_res);
}
