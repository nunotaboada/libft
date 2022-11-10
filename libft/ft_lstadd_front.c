/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:01:14 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/06 00:01:14 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

/*
    DESCRIPTION :
    The function ft_lstadd_front adds a new node to the front of a list:
        [NEW]->[.]->[.]->[.]->[NULL]
    RETURN VALUE :
    None.
*/

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new; // o endereço de new será o do apontador, novo inicio da lista
}
