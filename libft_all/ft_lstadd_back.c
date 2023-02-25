/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:37:20 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/11 12:37:33 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
	{
		while ((*lst)->next != NULL)
			*lst = (*lst)->next;
		(*lst)->next = new;
	}
	else
	{
		*lst = new;
	}
}
