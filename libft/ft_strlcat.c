/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:21:42 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/21 12:33:21 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strlcat(char *dest, char *str, int size)
{
	int	i;
	int	len_dest;
	int	len_str;

	i = 0;
	len_dest = 0;
	len_str = 0;
	while (dest[len_dest])
		len_dest++;
	while (str[len_str])
		len_str++;
	if (len_dest < size)
	{
		while (str[i] && (len_dest + i) < size - 1)
		{
			dest[len_dest + i] = str[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	return (len_str + len_dest);
}

