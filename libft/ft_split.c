/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:29:20 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/02 16:08:46 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);
static int num_elements(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char**	str;
	int	num;

	num = num_elements(s, c);
	str = malloc()
}

static int num_elements(const char *str, char c)
{
    int i;
    int	num;

    i = 0;
    num = 1;
    while (str[i + 1])
    {
        if (c == set[i] && c != set[i+1])
		num++;
	i++;
    }
    return (num);
}
