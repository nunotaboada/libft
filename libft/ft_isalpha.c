/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:17:33 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 10:18:43 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/*int main()
 {
     int i = 0;
     int i1 = 0;
     int j = 0;
     int k =0;
     int l= 0;
     char c = EOF;
     char str[] = "12oL+";
     while (str[j])
     {
     	i = ft_isalpha(str[j]);
     	i1 = isalpha(str[j]);
     	printf("%d, %d\n", i, i1);
     	j++;
     }
     k = ft_isalpha(c);
     l = isalpha(c);
     printf("k %d, l %d\n", k, l);
     return 0;
 }*/
