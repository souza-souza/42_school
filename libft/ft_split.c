/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:08:40 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/07 11:10:51 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				if (str[t] == c || str[t + 1] == '\0')
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

char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);

	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**res;

	if (!s)
		return (NULL);

	res = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);

	i = 0;
	j = 0;
	start = -1;

	while (s[i])
	{
		if (s[i] != c && start < 0)
			start = i;

		else if (s[i] == c && start >= 0)
		{
			res[j++] = word_dup(s, start, i);
			start = -1;
		}
		i++;
	}

	if (start >= 0)
		res[j++] = word_dup(s, start, i);

	res[j] = NULL;
	return (res);
}

