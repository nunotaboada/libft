/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:17:53 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 13:20:45 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
int main()
 {
     int i = 0;
     int i1 = 0;
     int j = 0;
     char str[] = "ABCdcfL\n";
     i = ft_toupper(str[j]);
     i1 = toupper(str[j]);
     printf("%c, %c", i, i1);
 }
*/
