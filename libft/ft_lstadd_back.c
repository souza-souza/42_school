/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:27:52 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/23 16:27:55 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *back;

    if (!lst || !new)
        return;

    if(*lst == NULL)
    {
        *lst = new;
        return;
    }

    back = *lst;
    
    while (back->next)
        back = back->next;
    back->next = new;
}
