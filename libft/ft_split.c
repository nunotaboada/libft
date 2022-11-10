/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:43:47 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 09:43:47 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	DESCRIPTION
 *	Allocates (with malloc(3)) and returns an array of strings obtained by
 *	splitting ’s’ using the character ’c’ as a delimiter. The array must be
 *	ended by a NULL pointer.
 *	PARAMETERS
 *	#1. The string to be split.
 *	#2. The delimiter character.
 *	RETURN VALUES
 *	The array of new strings resulting from the split.
 *	NULL if the allocation fails.
 */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>

// Conta o numero de palavras entre separadores que existem na string str
static int count_words(char *str, char c)
{
	int i = 0;
	int wcount = 0;

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

static char *ft_strdup1(char *str, char c, int *i)
{
	int a = 0;
	int b = 0;
	char *res;

	while (str[*i + a] != c && str[*i + a])
		a++;
	res = (char *)malloc(sizeof(char) * (a + 1));
	if (res == NULL)
		return NULL;
	while (b < a)
	{
		res[b] = str[*i];
		b++;
		*i = *i + 1;
	}
	res[b] = '\0';
	return (res);
}

static char **ft_strmalloc(char *str, char c)
{
	char **ptr;

	ptr = (char **)malloc(sizeof(*ptr) * (count_words(str, c) + 1));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

char **ft_split(char *str, char c)
{
	int i = 0;
	int a = 0;
	char **res;

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

// int main()
// {
// 	char **tab;
// 	int i;

// 	char str[] = "    ccccolactudocbemccaralhocccctudoccc    tudo    ccccc";
// 	i = 0;
// 	tab = 0;
// 	tab = ft_split(str, 'c');
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }
