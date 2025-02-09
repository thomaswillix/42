/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:20:46 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/09 13:42:45 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The memset() function fills the first n bytes of the memory area pointed 
to by s with the constant byte c. */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t	i;

	i = 0;
	ptr = (unsigned char *)b;

	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}