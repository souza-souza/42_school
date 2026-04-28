/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:21:18 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/22 11:35:02 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlcpy(char *str, char *dest, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (str[t])
	{
		t++;
	}
	if (size > 0)
	{
		while (str[i] && i < size - 1)
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (t);
}
/*int	main()
{
	char str[] = "Alo maltinha";
	char dest[3];

	printf("%d", ft_strlcpy(str, dest, 3));
	printf("%s",dest);
	return (0);
}*/
