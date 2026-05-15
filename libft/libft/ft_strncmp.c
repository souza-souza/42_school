/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 08:36:32 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/22 09:07:00 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *str, char *stg, int num)
{
	int	i;

	i = 0;
	while (str[i] && stg[i] && i < num)
	{
		if (str[i] != stg[i])
			return (str[i] - stg[i]);
		i++;
	}
	return (0);
}
/*int	main()
{
	char str[] = "eu gosto de queijo";
	char stg[] = "eu nao gosto de queijo";

	printf("%d", ft_strncmp(str, stg, 4));
	return (0);
}*/
