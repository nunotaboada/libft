/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:37:29 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 16:37:29 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	DESCRIPTION
 *	Allocates (with malloc(3)) and returns a new string, which is the result of
 *	the concatenation of ’s1’ and ’s2’.
 *	PARAMETERS
 *	#1. The prefix string.
 *	#2. The suffix string.
 *	RETURN VALUES
 *	The new string. NULL if the allocation fails.
 */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// static size_t ft_strlen(const char *str)
// {
//     size_t i = 0;
//     while (*str)
//     {
//         str++;
//         i++;
//     }
//     return (i);
// }

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len = 0;
    size_t i = 0;
    size_t j = 0;
    char *str;

    if (!s1 || !s2)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}

// int main()
// {
//     char *tab;
//     // char *tab2;
//     // char c = '%';

//     char str1[] = "str1";
//     char str2[] = "str2";
//     tab = ft_strjoin(str1, str2);
//     // tab2 = strjoin(str1, str2);
//     printf("%s\n", tab);
//     // printf("%s\n", tab2);
// }