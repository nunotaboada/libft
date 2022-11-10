/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:58:32 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 11:58:32 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	LIBRARY
 *	#include <string.h>
 *	DESCRIPTION
 *	The strchr() function locates the first occurrence of c (converted to a
 *	char) in the string pointed to by s. The terminating null character is
 *	considered to be part of the string; therefore if c is `\0', the functions
 *	locate the terminating `\0'.
 *	PARAMETERS
 *	#1. The string in which to checks for the occurence of c.
 *	#2. The character to check the occurence of.
 *	RETURN VALUES
 *	The function strchr() returns a pointer to the located
 *	character, or NULL if the character does not appear in the string.
 */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// that a C implementation of strchr() has to cast its result to convert it from const char* to char*, or do something equivalent.

char    *ft_strchr(const char *s, int c)
{

    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}

// int main()
// {
//     char *tab;
//     char *tab2;
//     // char c = '%';

//     char str[] = "ola tudo bem caralhowtudo ytudo";
//     tab = ft_strchr(str, 'w');
//     tab2 = strchr(str, 'w');
//     printf("%s\n", tab);
//     printf("%s\n", tab2);
// }