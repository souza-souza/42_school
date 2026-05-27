/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:49:00 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/23 11:10:35 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_memset(void *str, int c, int num)
{
	unsigned char *ptr = (unsigned char *)str;

	while (num > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		num--;
	}
	return (str);
}
