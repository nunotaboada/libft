/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:52:43 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/02 17:52:43 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc()) and returns a substring from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*	PARAMETERS
*	#1. The string from which to create the substring.
*	#2. The start index of the substring in the string ’s’.
*	#3. The maximum length of the substring.
*	RETURN VALUES
*	The substring. NULL if the allocation fails.
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

// static  char    *ft_strdup(const char *str)
// {
//     int i = 0;
//     char *res;

//     while (str[i])
//         i++;
//     res = (char *)malloc(sizeof(char) * (i + 1));
//     if (res == NULL)
//         return NULL;
//     i = 0;
//     while (str[i])
//     {
//         res[i] = str[i];
//         i++;
//     }
//     res[i] = '\0';
//     return (res);
// }


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i; //usar os unsigned int está relacionado com os intervalos de representação
    unsigned int j;
    char *res;

    i = 0;
    j = 0;
    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
            return (ft_strdup("")); //temos que usar esta função porque temos que criar o resultado com malloc.
    res = (char *)malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    while (s[i])
    {
        if (i >= start && j < len )  // é < que len porque é uma string e começa em 0
        {
            res[j] = s[i];
            j++;
        }
        i++;
    }
    res[j] = '\0';    
    return (res);    
}

// int main()
// {
//     unsigned int start = 4;
//     size_t len = 10;
//     char s1[] = "olarolagdjsj jhhh djjhg jhkkjolalkjkjolaola";
//     char *str;
//     str = ft_substr(s1, start, len);
//     printf("String inicial: %s\n", s1);
//     printf("String resultado: %s\n", str);
// }
