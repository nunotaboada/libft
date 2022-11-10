/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:19:45 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 17:19:45 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	LIBRARY
 *	#include <string.h>
 *	DESCRIPTION
 *	strlcat() appends string src to the end of dst.  It will append at most
 *	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
 *	dstsize is 0 or the original dst string was longer than dstsize (in practice
 *	this should not happen as it means that either dstsize is incorrect or that
 *	dst is not a proper string).
 *	PARAMETERS
 *	#1. The destiny string in which to concatenate.
 *	#2. The source string to concatenate.
 *	#3. The total number of bytes in destiny.
 *	RETURN VALUES
 *	the strlcat() function returns the length of the string it tried to create.
 */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

/*size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}*/

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!dst && !size) //teste introduzido
         return (ft_strlen(src));
    while (dst[i])
        i++;
    while (i + j + 1 < size && src[j])
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    // printf("%s\n", dst);
    while (src[j])
        j++;
    if (i >= size)
        return (size + j); // se o buffer (size) for menos que len de dst retorna size + len da src
    else
        return (i + j); // se o buffer (size) for maior que a len de dst retorna len da src + len da dst
}


// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (dst[i])
// 		i++;
// 	while (i + j + 1 < size && src[j])
// 	{
// 		dst[i + j] = src[j];
// 		j++;
// 	}
// 	dst[i + j] = '\0';
// 	while (src[j])
// 		j++;
// 	if (i >= size)
// 		return (j + size);
// 	else
// 		return (j + i);
// }



// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	dsize;

    
// 	dsize = 0;
// 	while (dest[dsize] != '\0' && dsize < size)
// 		dsize++;
// 	i = dsize;
// 	while (src[dsize - i] && dsize + 1 < size)
// 	{
// 		dest[dsize] = src[dsize - i];
// 		dsize++;
// 	}
// 	if (i < size)
// 		dest[dsize] = '\0';
// 	return (i + ft_strlen(src));
// }


// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t c;
// 	size_t d;

// 	if (dstsize <= ft_strlen(dst))
// 		return (dstsize + ft_strlen(src));
// 	c = ft_strlen(dst);
// 	d = 0;
// 	while (src[d] != '\0' && c + 1 < dstsize)
// 	{
// 		dst[c] = src[d];
// 		c++;
// 		d++;
// 	}
// 	dst[c] = '\0';
// 	return (ft_strlen(dst) + ft_strlen(&src[d]));
// }


// size_t		ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t total;
// 	size_t original;

// 	original = size;
// 	total = ft_strlen(dst) + ft_strlen(src);
// 	while (*dst != 0 && size > 0)
// 	{
// 		dst++;
// 		size--;
// 	}
// 	if (size == 0)
// 		return (ft_strlen(src) + original);
// 	while (*src != 0 && size > 1)
// 	{
// 		*dst++ = *src++;
// 		size--;
// 	}
// 	*dst = 0;
// 	return (total);
// 	return (0);
// }


// int main()
// {
//     char *dst;
//     dst = NULL;
// 	char src[] = "abchjjkhjkhn";
// 	unsigned int size = 0;
// 	unsigned int	c;
// 	c = ft_strlcat(dst, src, size);	
//     printf("the new string is: %s\n", dst);
// 	printf("the size of the new string is: %d\n", c);
// }

// strlcat
// strlcat(NULL, "abc", 0); <- does not crush
// strlcat(NULL, "abc", 1); <- crush
// strlcat("abc", NULL, 0); <- crush
