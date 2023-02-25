/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:19:04 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/11 12:19:14 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
