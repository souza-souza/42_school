/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:16:22 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/11 15:38:13 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
