/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:48:53 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 09:49:38 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (8);
	if (c >= 'a' && c <= 'z')
		return (8);
	if (c >= '0' && c <= '9')
		return (8);
	return (0);
}

/* int main()
{
     int i = 0;
     int i1 = 0;
     char j = '6';
     //char str[] = "12oL\n ";
     i = ft_isalnum(j);
     i1 = isalnum(j);
     printf("%d, %d\n", i, i1);
}*/
