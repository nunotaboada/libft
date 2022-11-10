/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:01:39 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/02 11:01:39 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	LIBRARY
 *	#include <string.h>
 *	DESCRIPTION
 * 	The strncmp() function compares not more than n characters. Because
 *	strncmp() is designed for comparing strings rather than binary data,
 *	characters that appear after a `\0' character are not compared.
 *	PARAMETERS
 *	#1. The first str to compare.
 *	#2. The second str to compare.
 *	#3. The number of bytes to compare the two strings.
 *	RETURN VALUES
 *	The strncmp() function returns an integer greater than, equal to, or less
 *	than 0, according as the string s1 is greater than, equal to, or less than
 *	the string s2.  The comparison is done using unsigned characters, so that
 *	`\200' is greater than `\0'.
 */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i = 0;

    if (!n)
        return (0);
    // i < n - 1 é igual a usar n-- até n ser zero
    while ((i < n - 1) && str1[i] && str2[i] && (str1[i] == str2[i]))
    {
        // printf("%2d\n", i);
        i++;

        // printf("%2d\n", i);
        // printf("\n")
    }
    // a utilização do unsigned char evita o overflow uma vez que vai até ao 255, o char vai até -128 a 127
    return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int main()
// {
//     char str1[] = "Hemlo";
//     char str2[] = "Hello";
//     int c1 = 200;
//     size_t size = 2;
//     int c;
//     c = ft_strncmp(str1, str2, size);
//     printf("%c\n", c1);
//     printf("%c\n", (unsigned char)c1);
//     printf("The strings to compare: %s, %s\n", str1, str2);
//     printf("The compare result, if > 0 s1 greater, <0 s2 greater, 0 s1 = s2 : %d\n", c);
// }
