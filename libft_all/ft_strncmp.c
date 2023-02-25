/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:07:28 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/11 14:07:39 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((i < n - 1) && str1[i] && str2[i] && (str1[i] == str2[i]))
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
