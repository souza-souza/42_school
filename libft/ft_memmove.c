/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:51:17 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/23 14:48:12 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stdio.h>
void	*ft_memmove(void *dest, const void *str, int num)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *o = (unsigned char *)str;
	int i;

	i = 0;
	if (d < o)
	{
		while (i < num)
		{
			d[i] = o[i];
			i++;
		}
	}
	if (d > o)
	{
		i = num;
		while (i > 0)
		{
			d[i - 1] = o[i - 1];
			i--;
		}
	}
	return (dest);
}
/*int	main()
{
	char str[] = "Vou comer picanha na sexta";
	char dest[30];

	printf("A frase é: \n%s", dest);
	ft_memmove(dest, str, ft_strlen(str) + 1);
	printf("A frase é: %s", dest);
	return (0);
}*/
