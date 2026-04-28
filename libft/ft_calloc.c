/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:55:53 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/28 10:06:11 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    void *ptr;

    if (size != 0 && num > __SIZE_MAX__ / size)
        return (0);

    ptr = malloc(num * size);
    if (!ptr)
        return(0);

    ft_bzero(ptr,(num * size));
    return (ptr);
}
/*int main()
{
    int *pnc;

    pnc = ft_calloc(5, sizeof(int));
    
    if (pnc)
        for (int i = 0; i < 5; i++)
		if (pnc[i] == 0)
          		printf("algo deu certo\n");
    return (0);
}*/
