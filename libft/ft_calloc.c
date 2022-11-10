/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:11:10 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 13:16:07 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <strings.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	len;

	len = nitems * size;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, len);
	return (ptr);
}

/* int main()
 {
     size_t nitems = 4;
     size_t size = 4;
     size_t j;
     size_t len = nitems * size;
     size_t lenarr;
     int *str;
     str = ft_calloc(nitems, size);
     lenarr = len / sizeof(str[0]);
     j = 0;
     while (j < lenarr)
     {
         printf("The values of pointer: %d\n", str[j]);
         j++;
     }
 }*/
