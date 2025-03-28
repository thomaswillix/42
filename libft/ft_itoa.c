/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 21:11:38 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/27 21:12:18 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_size(int n)
{
	int	s;

	s = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		s++;
		n *= -1;
	}
	while (n > 0)
	{
		s++;
		n /= 10;
	}
	return (s);
}

static int	exp_counter(int n)
{
	int	exp;
	int	digits;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	digits = get_size(n);
	if (n < 0)
		digits--;
	exp = 1;
	while (--digits)
		exp = exp * 10;
	return (exp);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i;
	long int	copy;

	copy = (long int)n;
	exp = exp_counter(n);
	i = 0;
	str = malloc(get_size(n) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i++] = (copy / exp) + 48;
		copy = copy % exp;
		exp = exp / 10;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int main()
{
	int n = 123464;
	int min_int = -2147483648;
	printf("%s", ft_itoa(n));
	printf("%s", ft_itoa(min_int));
	return (0);
}*/
