/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:53:14 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/06 12:53:14 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_lstadd_back adds a new node to the back of a list:
		[.]->[.]->[.]->[NEW]->[NULL]
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


void ft_lstadd_back(t_list **lst, t_list *new)
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
