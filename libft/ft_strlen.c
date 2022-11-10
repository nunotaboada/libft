/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:47:00 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 16:47:00 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strlen() function computes the length of the string s.
*	PARAMETERS
*	#1. The string to compute length.
*	RETURN VALUES
*	The strlen() function returns the number of characters that precede the 
*	terminating NUL character.  
*/

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}

// int main()
// {
//     int tab;
//     int tab2;
//     // char c = '%';

//     char str[] = "";
//     tab = ft_strlen(str);
//     tab2 = strlen(str);
//     printf("%d\n", tab);
//     printf("%d\n", tab2);
// }