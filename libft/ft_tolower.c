/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:13:44 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 13:15:26 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
int main()
 {
     int i = 0;
     int i1 = 0;
     int j = 3;
     char str[] = "ABCdcfL\n";
     i = ft_tolower(str[j]);
     i1 = tolower(str[j]);
     printf("%c, %c", i, i1);
 }
*/
