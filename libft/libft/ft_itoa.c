/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:12:17 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/07 12:27:46 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	long num;
	long i;
	char *str;
	char *temp;
	int t;

	num = n;
	i = 0;
	t = 0;
	str = malloc(n * sizeof(char));
	if (!str)
		return(0);
	if (n == 0)
		str[i] = '0';
		return (str);
	if (n < 0)
		str[i++] = '-';
	while (num > 0)
	{
		temp[t++] = (num % 10) + '0';
		num = num / 10;
	}
	t = ft_strlen(temp);
	while(t > 0)
		str[i] = temp[t];
		t--;
	return (str);
}

int	main()
{
	printf("%s\n", ft_itoa(42));
	return(0);
}
