/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:58:40 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/28 11:03:15 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	void	*ptr;
	int	size;
	
	size = ft_strlen(str);
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	ft_memcpy(ptr, str, size);
	
	return(ptr);
}

