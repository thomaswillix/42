/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:18:40 by tfreitas          #+#    #+#             */
/*   Updated: 2025/02/22 22:30:07 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
    int sign;
    int n;

    n = 0;
    sign = 1;
    while (*nptr == '-' || *nptr == '+')
    {
        if(*nptr == '-')
            sign *= -1;
        *nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        n = (*nptr - '0') + n*10;
        *nptr++;
    }
    return (n);
}

/*int main(int argc, char* argv[])
{

    int n = ft_atoi("--544aaa");
    printf("\n%i",n);
    n = ft_atoi("-+88");
    printf("\n%i",n);
    n = ft_atoi("-+a");
    printf("\n%i",n);
    
    return 0;
}*/
