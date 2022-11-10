/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:54:35 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/02 11:54:35 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	LIBRARY
 *	#include <string.h>
 *	DESCRIPTION
 *	The strnstr() function locates the first occurrence of the null-terminated
 *	string needle in the string haystack, where not more than len characters are
 *	searched.  Characters that appear after a `\0' character are not searched.
 *	PARAMETERS
 *	#1. The string in which to check for the occurence of the substring.
 *	#2. The substring to check the occurence of.
 *	#3. The number of bytes to check in haystack.
 *	RETURN VALUES
 *	If needle is an empty string, haystack is returned; if needle occurs nowhere
 *	in haystack, NULL is returned; otherwise a pointer to the first character of
 *	the first occurrence of needle is returned.
 *   needle = s2
 *   haystack = s1
 */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{

    size_t i = 0;
    size_t j = 0;
    
    if ((!s1 || !s2) && n == 0)
    	return (NULL);
    if (*s2 == 0)// quando verificar o NULL, colocar essa condição na esquerda
    	return((char *)s1);
    while (s1[i] && i < n)
    {
	if (s1[i] == s2[j])
        {
            while (s1[i + j] == s2[j] && (i + j) < n)
            {
                if (s2[j + 1] == '\0')
                {
                    // printf("%s\n", s1);
                    return ((char *)s1 + i);
                }
                j++;
            }
        }
        j = 0;
        i++;
    }	
    return (NULL);
    	
}

/*int main()
{
    size_t size = 5;
    char *res;
    char s1[] = "ola tudo bem";
    char s2[] = "t";

    res = ft_strnstr(s1, s2, size);
    printf("%s\n", res);
}*/
