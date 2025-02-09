/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:50:06 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/09 21:56:52 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *str, int search_str)
{
	while(*str)
	{
		if(*str == search_str)
			return (char *)str;
		str++
	}
	// Si buscamos el carácter nulo '\0'
    if (search_str == '\0')
        return (char *)str;

    return NULL;  // Si no se encuentra el carácter
}