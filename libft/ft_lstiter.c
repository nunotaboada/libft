/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:34:54 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 04:34:54 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_lstiter applies the function f passed as parameter
	to the content of each node of a given list.
	RETURN VALUE :
	None.
*/

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
