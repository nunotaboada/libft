/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:56:38 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/02 15:56:38 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strchr() function locates the last occurrence of c (converted to a 
*	char) in the string pointed to by s. The terminating null character is 
*	considered to be part of the string; therefore if c is `\0', the functions 
*	locate the terminating `\0'.
*	PARAMETERS
*	#1. The string in which to check the occurence of c.
*	#2. The character to check the occurence of.
*	RETURN VALUES
*	The function strrchr() returns a pointer to the located 
*	character, or NULL if the character does not appear in the string.
*/

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char    *ft_strrchr(const char *str, int c)
{
    int len = 0;

    while (str[len])
        len++;
    while (len >= 0)
    {
        if (str[len] == c)
            return (char *)(str + len);
        len--;
    }
    return (NULL);
}

// int main()
// {
//     char *tab;
//     char *tab2;
//     char c = '\0';

//     char str[] = "  w    olatudoybemcaralhotudoytudo";
//     tab = ft_strrchr(str, c);
//     printf("%s\n", tab);
    
// }