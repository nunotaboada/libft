/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:21:16 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/11 12:21:26 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
