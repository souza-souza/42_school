/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:03:24 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/28 11:34:20 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	int i;

	i = 0;
	ptr = malloc(len * sizeof(char));
	if (!ptr)
		return (0);
	while (len > 0 && s)
	{
		ptr[i] = s[start];
		start++;
		i++;
		len--;
	}
	return (ptr);
}

