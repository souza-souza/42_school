/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:08:40 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/29 15:05:59 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	count_word(char const *str, char c)
{
	int i;
	int t;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] != c)
		{
			t = i;
			while (str[t])
			{
				if (str[t] == c || str[i + 1] == '\0')
				{
					count++;
					i = t;
					break;
				}
				else
					t++;
			}
		}
		i++;
	}
	return(count);
}

/*char **ft_split(char const *s, char c)
{
	int t;
	int i;
	char **res;
	int start;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	res = malloc(strlen(s) * sizeof(char))

	while(s[i])
}*/
int	main()
{
	char str[] = " ";

	printf("%d", count_word(str, ' '));
	return (0);
}
