/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:21:18 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/07 10:46:28 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char const *str, char *dest, size_t size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (str[t])
	{
		t++;
	}
	if (size > 0)
	{
		while (str[i] && i < size - 1)
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (t);
}

