/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:59:06 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/05 21:59:06 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

/*
	DESCRIPTION :
	The function ft_lstnew allocates memory for a new list node and 
	initializes its content to the value passed as parameter, before
	setting its next node to NULL. 
	RESULT VALUE :
	The new list ode.
*/

/*typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;*/


t_list *ft_lstnew(void *content)
{
    t_list *tmp;

    tmp = (t_list *)malloc(sizeof(t_list));
    if (!tmp)
        return (NULL);
    tmp->content = content; // node->content = content
    tmp->next = NULL;
    return (tmp); 
}


/* int		main(void)
{
	char	str[] = "lorem ipsum dolor sit";

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n", elem->content);
}*/



