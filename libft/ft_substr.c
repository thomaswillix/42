/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:12:15 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/31 21:12:46 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_res;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		str_res = (char *)malloc(ft_strlen(s + start) + 1);
	else
		str_res = (char *)malloc(len + 1);
	if (!str_res)
		return (0);
	while (i < (len) && s[start] != '\0')
	{
		str_res[i] = s[start];
		start++;
		i++;
	}
	str_res[i] = '\0';
	return (str_res);
}
