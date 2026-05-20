/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
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
/*int	main()
{
	char str[] = "eu gosto da bia";

	printf("%s", ft_substr(str, 12, 5));
	return (0);
}*/
