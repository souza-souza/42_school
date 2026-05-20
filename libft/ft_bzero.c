/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:16:22 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/11 15:38:13 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_bzero(void *str, int num)
{
	unsigned char *ptr = (unsigned char *)str;

	while(num > 0)
	{
		*ptr = 0;
		ptr++;
		num--;
	}
	return (str);
}
/*int	main()
{
	char str[20];

	printf("O valor na memoria é: %s\n", str);

	ft_bzero(str, sizeof(str));

	printf("O valor na memoria agr é: %s", str);

	return (0);
}*/
