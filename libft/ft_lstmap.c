/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:51:22 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 04:51:22 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_lstmap creates a new list from a given list  by 
	applying the function passed as parameter to the original list. If
	the memory allocation fails for any node in the new list, the new list
	will be deleted with the function passed as parameter and its memory
	will be freed.

	RETURN VALUE :
	The new list containing the new values if a functon was provided.
	A new copy of the list if no function was provided.
	NULL if the memory allocation failed.
*/

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

/*typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;*/


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	first = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew(f(lst->content));
		if (!new->next)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new = new->next;
	}
	return (first);
}
