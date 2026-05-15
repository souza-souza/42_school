/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:16:31 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/23 11:46:32 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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
