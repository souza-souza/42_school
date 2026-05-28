/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:51:17 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/28 14:28:26 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, int num)
{
	unsigned char	*d;
	unsigned char	*dest;
	unsigned char	*o;
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	if (d < o)
	{
		while (i < num)
		{
			d[i] = o[i];
			i++;
		}
	}
	if (d > o)
	{
		i = num;
		while (i > 0)
		{
			d[i - 1] = o[i - 1];
			i--;
		}
	}
	return (dest);
}
