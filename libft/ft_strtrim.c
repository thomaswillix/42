/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:55:05 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/02 12:29:56 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int to_trim(const char *set, char c);
static char *new_str(const char *s1, size_t start, size_t end);

char	*ft_strtrim(const char *s1, const char *set)
{
    int	i;
    int	j;
    
    i = 0;
    j = ft_strlen(s1) - 1;
    if (ft_strlen(s1) == 0)
        return (ft_strdup(""));
    while (to_trim(set, s1[i]))
        i++;
    while (to_trim(set, s1[j]))
        j--;
    return (new_str(s1, i, j - (i - 1)));
}

static char *new_str(const char *s1, size_t start, size_t len)
{
    char *str;
    size_t i;

    if (len <= 0 || start >= ft_strlen(s1))
        return (ft_strdup(""));
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s1[start + i];
        i++;
    }
    return (str);
}

static int to_trim(const char *set, char c)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}