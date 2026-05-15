/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:09:13 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/29 13:08:03 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t fim;

	if (!s1 || !set)
		return(0);
	start = 0;
	while(s1[start] && ft_strchr(set, s1[start]))
	{
		start++;	
	}
	fim = ft_strlen(s1);
	while(fim > start && ft_strchr(set, s1[fim - 1]))
	{
		fim--;
	}
	return(ft_substr(s1, start, (fim - start)));
}
/*int	main()
{
	char str[] = "!!*!Eu quero minha mae&!!";
	char c[] = "!*&^%$#";
	char *trim = ft_strtrim(str, c);

	printf("A string ficou assim: %s", trim);
	return (0);
}*/
