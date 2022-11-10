/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:15:36 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/06 12:15:36 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>


/*
	DESCRIPTION :
	The function ft_lstsize measures the size of a given list by counting
	the number of nodes in it.
	RETURN VALUE :
	The integer number of nodes in the given list.
*/

/*typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;*/


int ft_lstsize(t_list *lst)
{
    int i;
    t_list *tmp;

    i = 0;
    tmp = lst;
    while (tmp != NULL)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}

/*int		main(void)
{
	char	str[] = "lorem ipsum dolor sit";

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n", elem->content);
}*/
