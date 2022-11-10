/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:35 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 13:48:32 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long long int	n1;
	char			c;

	n1 = n;
	if (n1 < 0)
	{
		n1 *= -1;
		write(fd, "-", 1);
	}
	if (n1 > 9)
	{
		ft_putnbr_fd(n1 / 10, fd);
		c = n1 % 10 + 48;
		write(fd, &c, 1);
	}
	if (n1 <= 9)
	{
		c = n1 % 10 + 48;
		write(fd, &c, 1);
	}
}

/*
int main()
{
     ft_putnbr_fd(-2147483648, 1);
     return 0;
}
*/
