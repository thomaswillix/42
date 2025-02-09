/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:57:33 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/09 22:04:16 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int search_str)
{
	size_t str_len;
	str_len = ft_strlen(str);

	// Si buscamos el carácter nulo '\0'
    if (search_str == '\0')
        return (char *)str + str_len;

	while(str_len > 0)
	{
		if(str[str_len - 1] == search_str)
			return (char *)str + str_len - 1;
		str_len--;
	}
	
    return NULL;  // Si no se encuentra el carácter
}