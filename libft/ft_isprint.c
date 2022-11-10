/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:48:48 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 10:49:02 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main()
 {
     int i = 0;
     int i1 = 0;
     int j = 0;
     int k =0;
     int l= 0;
     char c = EOF;
     char str[] = "12oL\n";
     while (str[j])
     {
     	i = ft_isprint(str[j]);
     	i1 = isprint(str[j]);
     	printf("ft %d, %d\n", i, i1);
     	j++;
     }
     k = ft_isprint(c);
     l = isprint(c);
     printf("k %d, l %d\n", k, l);
     return 0;
 }*/
