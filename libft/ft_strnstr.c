/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:07:25 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/22 11:33:46 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strnstr(char *str, char *stg, int num)
{
	int	i;
	int	t;

	i = 0;
	if (stg[0] == '\0')
		return (&str[i]);
	while (i < num && str[i])
	{
		t = 0;
		while ((i + t < num) && str[i + t] == stg[t])
		{
			t++;
			if (stg[t] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*int	main()
{
	char str[] = "hello world";
	char stg[] = "world";

	printf("%s", ft_strnstr(str, stg, 12));
	return (0);
}*/
