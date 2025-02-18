/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:55:05 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/18 16:55:05 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	i;
	size_t	j;
	char	*str;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	str = (char *)malloc(sizeof(*s1) * s1_len);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		while(set[j])
		{
			if (s1[i] != set[j])
				str = s
		}
	}
}