/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:56:36 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/28 14:15:06 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;
	const unsigned char	uc;
	const unsigned char	*str;
	unsigned char		c;
	unsigned int		i;

	*s = *str;
	uc = c;
	i = 0;
	while (n > 0)
	{
		if (s[i] == uc)
			return ((void *)&s[i]);
		i++;
		n--;
	}
	return (0);
}
