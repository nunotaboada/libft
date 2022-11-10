/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:38:55 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 10:39:19 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
     	i = ft_isdigit(str[j]);
     	i1 = isdigit(str[j]);
     	printf("ft %d, %d\n", i, i1);
     	j++;
     }
     k = ft_isdigit(c);
     l = isdigit(c);
     printf("k %d, l %d\n", k, l);
     return 0;
 }*/
