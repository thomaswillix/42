/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:13:35 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/31 19:28:34 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	size_t	j;
	size_t	i;
	char	*str;

	i = 0;
	j = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(total_len);
	if (!str)
		return (NULL);
	while ((i <= (total_len - 1)) && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while ((i < total_len - 1) && s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
