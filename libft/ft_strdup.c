/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:26:01 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 13:26:01 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	LIBRARY
 *	#include <string.h>
 *	DESCRIPTION
 *	The strdup() function allocates sufficient memory for a copy of the string
 *	s1, does the copy, and returns a pointer to it.
 *	PARAMETERS
 *	#1. The string to duplicate.
 *	RETURN VALUES
 *	The strdup() function returns thE pointer to the copy of str.
 */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char *ft_strdup(const char *str)
{
    int i = 0;
    char *res;

    while (str[i])
        i++;
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (res == NULL)
        return NULL;
    i = 0;
    while (str[i])
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

// int main()
// {
//     char *tab;
//     char *tab2;
//     // char c = '%';

//     char str[] = "jhkjhkjhj";
//     tab = ft_strdup(str);
//     tab2 = strdup(str);
//     printf("%s\n", tab);
//     printf("%s\n", tab2);
// }