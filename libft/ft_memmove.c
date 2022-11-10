/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:14:18 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 12:19:24 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	if (!dst && !src)
		return (NULL); 
	if (src < dst)
	{
		len = n;
		while (len)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dst);
}

/* Teste 1 overlap
 int main ()
 {
     char str1[9] = "aabbccdd";
     char str2[9] = "aabbccdd";

     printf("The string: %s\n", str1);
     memmove(str1 + 2, str1, 6);
     printf("New string: %s\n", str1);

     printf("The string2: %s\n", str2);
     ft_memmove(str2 + 2, str2, 6);
     printf("New string2: %s\n", str2);

     return (0);
 }
*/

/* Teste com array

 int main()
 {
 char csrc[] = "GeeksforGeeks";
 char cdest[100];
 ft_memmove(cdest, csrc, strlen(csrc)+1);
 printf("Copied string is %s", cdest);
 
 int isrc[] = {10, 20, 30, 40, 50};
 int n = sizeof(isrc)/sizeof(isrc[0]);
 //  printf("%d", sizeof(isrc));
 int idest[n], i;
 ft_memmove(idest, isrc, sizeof(isrc));
 printf("\nCopied array is ");
 for (i=0; i<n; i++)
     printf("%d ", idest[i]);
 return 0;
 }
*/
