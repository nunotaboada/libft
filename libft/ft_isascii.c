/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:31:08 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 10:31:53 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main()
 {
     int i = 0;
     int i1 = 0;
     int j = 0;
     int k =0;
     int l= 0;
     char c = EOF;
     char str[] = "12oL ";
     while (str[j])
     {
     	i = ft_isascii(str[j]);
     	i1 = isascii(str[j]);
     	printf("%d, %d\n", i, i1);
     	j++;
     }
     k = ft_isascii(c);
     l = isascii(c);
     printf("k %d, l %d\n", k, l);
     return 0;
 }*/
