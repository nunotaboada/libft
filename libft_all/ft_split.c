/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:46:09 by nmoreira          #+#    #+#             */
/*   Updated: 2023/01/30 20:46:09 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int ft_strlen(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != c)
        ++i;
    return (i);
}

static char **split1(char **split, char *str, char c)
{
    int k;
    int j;

    k = 0;
    while (*str)
    {
        j = 0;
        split[k] = (char *)malloc(sizeof(char) * (ft_strlen(str, c) + 1));
        if (!split[k])
            return (NULL);
        while (*str != '\0' && *str != c)
        {
            split[k][j] = *str;
            j++;
            str++;
        }
        while (*str == c)
            str++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return (split);
}

static int count_words(char *str, char c)
{
    int i = 0;
    int words = 0;

    while (str[i] == c)
        i++;
    while (str[i])
    {
        words++;
        while (str[i] != '\0' && str[i] != c )
            i++;
        while (str[i] == c)
            i++;
    }
    return (words);
}

char **ft_split(char *str, char c)
{
    char **split;

    split = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
    if (!split)
        return (NULL);
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == c)
        str++;
    split = split1(split, str, c);
    return (split);
}

// int main(void)
// {
//     char **tab;
//     int i;

//     char str[] = "    %%%ccccolactudocbemccaralhocccctudoccc%%%    tudo%ccc%cc%";
//     i = 0;
//     // ft_words(str);
//     tab = ft_split(str, '%');
//     while (tab[i])
//     {
//         printf("%s\n", tab[i]);
//         i++;
//     }
//     return (0);
// }
