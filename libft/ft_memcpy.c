/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:17:11 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 11:21:36 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/* Teste 1

int main()
{
 char csrc[] = "GeeksforGeeks";
 char cdest[100];
 ft_memcpy(cdest, csrc, strlen(csrc)+1);
 printf("Copied string is %s", cdest);
 
 int isrc[] = {10, 20, 30, 40, 50};
 int n = sizeof(isrc)/sizeof(isrc[0]);
 printf("%lu ", sizeof(isrc[0]));
 int idest[n], i;
 ft_memcpy(idest, isrc, 16);
 printf("\nCopied array is ");
 for (i=0; i<n; i++)
     printf("%d ", idest[i]);
 return 0;
 } */

/* Teste 2 de overlap

   int main ()
   {
     char str1[9] = "aabbccdd";
     char str2[9] = "aabbccdd";

     printf("The string1: %s\n", str1);
     printf("The string2: %s\n", str2);
     memcpy(str2 + 2, str2, 4);
     ft_memcpy(str1 + 2, str1, 4);
     printf("New string1: %s\n", str1);
     printf("New string2: %s\n", str2);

     // strcpy_s(str1, sizeof(str1), "aabbccdd");   // reset string

     // printf("The string: %s\n", str1);
     // memmove(str1 + 2, str1, 6);
     // printf("New string: %s\n", str1);
     return (0);
 }*/
