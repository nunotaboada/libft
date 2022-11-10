/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:24:09 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/06 12:24:09 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION :
    The function ft_lstlast finds the last node in a given list.
    RETURN VALUE :
    The last node of a list.
        [.]->[.]->[.]->[LAST]->[NULL]
*/

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

/*typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;*/

t_list *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    if(!lst)
        return (NULL);
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return (tmp);
}
