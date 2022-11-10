/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:06:49 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 12:10:14 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;

	s1 = s;
	while (n > 0)
	{
		*s1 = 0;
		s1++;
		n--;
	}
}

/*int main()
 {
     size_t i = 0;
     size_t j = 0;
     size_t k = 0;
     size_t q = 0;
     size_t len = 13;
     char str[] = "ola tudo bem";
     char str1[] = "ola tudo bem";
     while (str[i])
         i++;
     while (str1[k])
     	k++;
     ft_bzero(str, len);
     printf("ft_bzero\n");
     while (j < i)
     {
         printf("%c", str[j]);
         j++;
     }
     
     len = 13; 
     printf("\n");
     bzero(str1, len);
     printf("bzero\n");
     while (q < k)
     {
         printf("%c", str1[q]);
         q++;
     }
     printf("\n");
 }*/
