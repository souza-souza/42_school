/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 08:36:32 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/22 09:07:00 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

