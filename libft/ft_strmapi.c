/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:18:32 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/28 18:34:20 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	s;
	char			*str;

	i = 0;
	s = strlen(s);
	str = (char *) malloc(s);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
	}
	return (str);
}
