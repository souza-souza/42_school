/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:49:00 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/23 11:10:35 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	*ft_memset(void *str, int c, int num)
{
	unsigned char *ptr = (unsigned char *)str;

	while (num > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		num--;
	}
	return (str);
}
/*int	main()
{
	char str[20];

	ft_memset(str, '-', 2);
	str[2] = '\0';

	printf("O valor é: %s", str);
	return (0);
}*/
