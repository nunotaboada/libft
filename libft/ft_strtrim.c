/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:16:23 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/02 16:16:23 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
*	specified in ’set’ removed from the beginning and the end of the string.
*	PARAMETERS
*	#1. The string to be trimmed.
*	#2. The reference set of characters to trim.
*	RETURN VALUES
*	The trimmed string. NULL if the allocation fails.
*/

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// static  size_t  ft_strlen(const char *str)
// {
//     size_t i = 0;
//     while (*str)
//     {
//         str++;
//         i++;
//     }
//     return (i);
// }

// static  char    *ft_strchr(const char *s, int c)
// {

//     while (*s)
//     {
//         if (*s == c)
//             return ((char *)s);
//         s++;
//     }
//     if (c == '\0')
//         return ((char *)s);
//     return (NULL);
// }

// static  char    *ft_strrchr(const char *str, int c)
// {
//     int len = 0;

//     while (str[len])
//         len++;
//     while (len >= 0)
//     {
//         if (str[len] == c)
//             return (char *)(str + len);
//         len--;
//     }
//     return (NULL);
// }

// static  size_t  ft_strlcpy(char *destination, const char *source, size_t size)

// {
//     size_t i = 0;
//     size_t lensrc = 0;

//     // printf("%s\n%s\n", destination, source);
//     if (!destination || !source)
//         return (0);
//     while (source[lensrc])
//         lensrc++;
//     if (size < 1)
//         return (lensrc);
//     while ((source[i]) && (i < size - 1))
//     {
//         destination[i] = source[i];
//         i++;
//     }
//     destination[i] = '\0';
//     return (lensrc);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    // size_t k;
    char *str;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    // k = 0;
    j = ft_strlen(s1);
    
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (s1[j -1] && ft_strrchr(set, s1[j -1]) && j > i)
        j--;
    str = (char *)malloc(sizeof(char) * (j - i + 1 )); // porque devolve o array truncado
    if (!str)
        return (NULL);
    ft_strlcpy(str, &s1[i], j - i + 1);
    return (str);
}

// int main()
// {
//     char set[] = "ola";
//     char s1[] = "olarolagdjsj jhhh djjhg jhkkjolalkjkjolaola";
//     char *str;
//     str = ft_strtrim(s1, set);
//     printf("String inicial: %s\n", s1);
//     printf("String set: %s\n", set);
//     printf("String resultado: %s\n", str);
// }
