/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:01:03 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/18 13:01:03 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
    char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = 0;
    return (str);
}