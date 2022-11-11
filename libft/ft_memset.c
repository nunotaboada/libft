/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:19:08 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 13:19:17 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*ptr1;

	ptr1 = (unsigned char *)ptr;
	while (len)
	{
		*ptr1++ = (unsigned char)c;
		len--;
	}
	return (ptr);
}
