/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:47:01 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/28 14:26:55 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, int num)
{
	unsigned char	*ptr;
	unsigned char	*dest;
	unsigned char	*pnc;
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	while (num > 0)
	{
		*ptr = pnc[i];
		ptr++;
		i++;
		num--;
	}
	return (dest);
}
