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

void ft_putstr_fd(char *s, int fd)
{
	int	i;
	i = 0;
	
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*int	main()
{
	char str[] = "teste definitivo";

	ft_putstr_fd(str, 1);
	write(1, "\n", 1);
	ft_putstr_fd(str, 2);

	return (0);
}*/
