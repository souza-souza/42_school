/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:09:13 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/28 13:39:31 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	int i;

	ptr = malloc();
	while(s1[i])
	{
		if(s1[i] == ' ' && s1[i - 1] == ' ')
			s[i] = "";
		i++;
		
	}
}
