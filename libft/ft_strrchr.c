/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:27:03 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/22 11:30:38 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(char *str, char c)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (str[i])
	{
		if (str[i] == c)
			t = i;
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	if (t == 0)
		return (0);
	return (&str[t]);
}
/*int	main()
{
	char str[] = "Falae gente";
	printf("%s", ft_strrchr(str, '\0'));
	return (0);
}*/
