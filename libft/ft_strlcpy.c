/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:42:22 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 19:42:22 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	LIBRARY
 *	#include <string.h>
 *	DESCRIPTION
 *	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 *	NUL-terminating the result if size is not 0.
 *	PARAMETERS
 *	#1. The destiny string in which to copy.
 *	#2. The source string to copy.
 *	#3. The total number of bytes in destiny.
 *	RETURN VALUES
 *	the strlcpy() function returns the length of the string it tried to create.

 *  With the strlcpy() function, however, only size characters maximum are
 *  copied, and the value returned is the size of string src. (The value returned is
 *  always the size of string src regardless of how many characters are copied.)
 */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

// size_t ft_strlen(const char *str)
// {
//     size_t i = 0;
//     while (*str)
//     {
//         str++;
//         i++;
//     }
//     return (i);
// }

size_t ft_strlcpy(char *dst, const char *src, size_t size)

{
    size_t i = 0;
    size_t lensrc = 0;

    // printf("%s\n%s\n", destination, source);
    // if (!dst || !src)
    //     return (0);
    while (src[lensrc])
        lensrc++;
    if (size < 1)
        return (lensrc);
    while (src[i] && (i < size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (lensrc);
 }

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	const char	*buf;

// 	if (!dst || !src)
// 		return (0);
// 	buf = src;
// 	if (src && dst && size)
// 	{
// 		while (*src && --size)
// 			*dst++ = *src++;
// 		*dst = 0;
// 	}
// 	return (ft_strlen(buf));
// }

// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t	i;

// 	i = 0;
// 	if (size == 0)
// 	{
// 		while (src[i])
// 			i++;
// 		return (i);
// 	}
// 	while (i < size - 1 && src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	if (i < size)
// 		dest[i] = '\0';
// 	while (src[i] != '\0')
// 		i++;
// 	return (i);
// }

/*int main()
{
    // char src[] = "Hello";
    char *dest = 0;
    unsigned int size = 4;
    unsigned int c;
    c = ft_strlcpy(NULL, NULL, size);
    printf("the new string is: %s\n", dest);
    printf("the size of the new string is: %d\n", c);
}*/
