/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:53:19 by tfreitas          #+#    #+#             */
/*   Updated: 2025/03/27 21:19:46 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *str, char c)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**allocate_words(int count)
{
	char	**result;

	result = (char **) malloc((count + 1) + sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

static char	*copy_segment(char const *str, int start, int len)
{
	char	*segment;
	int		k;

	k = 0;
	segment = (char *) malloc(len + 1);
	if (!segment)
		return (NULL);
	while (k < len)
	{
		segment[k] = str[start + k];
		k++;
	}
	segment[k] = '\0';
	return (segment);
}

static void	fill_words(char **result, char const *str, char c)
{
	int	i;
	int	j;
	int	start;
	int	len;

	i = 0;
	j = 0;
	start = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == c || str[i + 1] == '\0')
		{
			len = i - start + (str[i + 1] == '\0');
			result[j] = copy_segment(str, start, len);
			if (!result[j])
				return ;
			j++;
			start = i + 1;
		}
		i++;
	}
	result[j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;

	count = count_words(s, c);
	result = allocate_words(count);
	if (!result)
		return (NULL);
	fill_words(result, s, c);
	return (result);
}
/*#include <stdio.h>
int main ()
{
	char **result;
	char str[] = "Hola ,muy buenasss";
	char sep = ' ';

	result = ft_split(str, sep);
	int i = 0;
	while (result[i]){
		printf("Parte %d: %s\n", i, result[i]);
		i++;
	}
	return (0);
}*/
