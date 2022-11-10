/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:03:57 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/06 15:03:57 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_lstdelone deletes the content of a list node with the
	function passed as parameter before freeing the memory of the node.
	RETURN VALUE :
	None.

    não vai libertar o 
*/

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst && del)
    {
        del(lst->content); // não sei se deva fazer lst->content
        free(lst);
    }
}
