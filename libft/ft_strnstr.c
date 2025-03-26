/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:12:00 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/22 22:22:39 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  i;
        size_t  j;

        i = 0;
        j = 0;
        if (!*little)
                return ((char *) big);
        while (big[i] && i < len)
        {
                j = 0;
                while (big[i + j] && little[j] && (i - j) < len && big[i + j]
                        == little[j])
                        j++;
                if (!little[j])
                        return ((char *)(big + i));
                i++;
        }
        return (NULL);
}
