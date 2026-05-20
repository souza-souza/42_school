/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:47:01 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/23 13:50:53 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, int num)
{
	unsigned char *ptr = (unsigned char *)dest;
	unsigned char *pnc = (unsigned char *)str;
	int i;

	i = 0;
	while (num > 0)
	{
		*ptr = pnc[i];
		ptr++;
		i++;
		num--;
	}
	return(dest);
}
/*int	main()
{
	char str[] = "Alo gente";
	char dest[20];

	printf("A frase é: %s\n", dest);
	ft_memcpy(dest, str, (ft_strlen(str) + 1));
	printf("A frase é: %s", dest);
	return (0);
}*/
