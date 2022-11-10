/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:01:23 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 13:08:01 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

static int	ft_lenght(int n)
{
	int	lenght;

	lenght = 0;
	if (n < 0)
		lenght++;
	if (n == 0)
		lenght = 1;
	while (n)
	{
		n = n / 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	unsigned int	lenght;
	char			*str;

	lenght = ft_lenght(n);
	str = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		str[0] = '0';
	str[lenght] = '\0';
	while (number)
	{
		str[lenght - 1] = number % 10 + 48;
		lenght--;
		number = number / 10;
	}
	return (str);
}

/* 
int main()
 {
     char *i;
     char *i1;
     // int i1 = 0;
     // int j = 4;
     // char str[] = "    \n34512oL\n";
     //char str[] = "-12345";
     i = ft_itoa(-2147483647);
     i1 = ft_itoa(0);
     // i1 = atoi(str);
     printf("%s", i);
     printf("%s", i1);
 }*/
