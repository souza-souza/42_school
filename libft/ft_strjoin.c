/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:34:51 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/28 12:13:36 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *ptr;
	int len_1;
	int len_2;
	int t;

	t = 0;
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	ptr = malloc((len_1 + len_2) * sizeof(char));
	if (!ptr)
		return(0);

	ft_memcpy(ptr, s1, len_1);
	i = len_1;
	while(s2[t])
	{
		ptr[i] = s2[t];
		i++;
		t++;	
	}
	ptr[i] = '\0';

	return(ptr);
}
