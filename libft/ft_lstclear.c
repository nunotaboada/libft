/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:03:54 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/07 04:03:54 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_lstclear deletes each node of a list with the function
	passed as parameter. It also frees the memory of each node and finally
	sets the list pointer to NULL.
	RETURN VALUE :
	None.
*/

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

/*typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;*/

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    
    
   if (lst && del)
    {
    	while(*lst)
    	{
        	tmp = *lst;
        	*lst = (*lst)->next;
        	ft_lstdelone(tmp, del); 
    	}
    	*lst = NULL;
    }	
}
