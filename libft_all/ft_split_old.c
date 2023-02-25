/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:27:36 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/11 13:27:42 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	i;
	int	wcount;

	i = 0;
	wcount = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			wcount++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (wcount);
		}
		i++;
	}
	return (wcount);
}

static char	*ft_strdup1(char *str, char c, int *i)
{
	int		a;
	int		b;
	char	*res;

	a = 0;
	b = 0;
	while (str[*i + a] != c && str[*i + a])
		a++;
	res = (char *)malloc(sizeof(char) * (a + 1));
	if (res == NULL)
		return (NULL);
	while (b < a)
	{
		res[b] = str[*i];
		b++;
		*i = *i + 1;
	}
	res[b] = '\0';
	return (res);
}

static char	**ft_strmalloc(char *str, char c)
{
	char	**ptr;

	ptr = (char **)malloc(sizeof(*ptr) * (count_words(str, c) + 1));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		a;
	char	**res;

	i = 0;
	a = 0;
	if (!str)
		return (NULL);
	res = ft_strmalloc(str, c);
	if (res == NULL)
		return (NULL);
	while (a < count_words(str, c))
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			res[a] = ft_strdup1(str, c, &i);
			a++;
		}
		i++;
	}
	res[a] = NULL;
	return (res);
}
