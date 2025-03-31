/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:08:30 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/31 20:20:28 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	num_values;

	num_values = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * (num_values + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i <= num_values)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
