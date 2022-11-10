/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:57:36 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/04 10:57:36 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	LIBRARY
 *	#include <string.h>
 *	DESCRIPTION
 *	The memchr() function locates the first occurrence of c (converted to an
 *	unsigned char) in string s.
 *	PARAMETERS
 *	#1. The pointer in which to check for the occurence of c.
 *	#2. The character to check occurence of.
 *	#3. The number of bytes to check for any occurence of c in s.
 *	RETURN VALUES
 *	The memchr() function returns a pointer to the byte located, or NULL if no
 *	such byte exists within n bytes.
 */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)str;
    while (n > 0)
    {
        if (*ptr == (unsigned char)c)
            return ((void *)ptr);
        ptr++;
        n--;
    }
    return (NULL);
}

// void	*ft_memchr(const void *str, int c, size_t n)
// {
// 	while (n--)
// 		if (*(unsigned char *)str++ == (unsigned char)c)
// 			return ((void *)(--str));
// 	return (NULL);
// }

// int main()
// {
//     int c = 'l';
//     size_t n = 1;
//     char *str1;
//     char *str = "ola tudo bem agora   carago";
//     str1 = ft_memchr(NULL, c, n);
//     printf("The initial string: %s\n", str);
//     printf("The after serach o char:%c string: %s\n", c, str1);
// }