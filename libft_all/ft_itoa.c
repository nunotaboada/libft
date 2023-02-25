/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:32:46 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/11 12:32:52 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
