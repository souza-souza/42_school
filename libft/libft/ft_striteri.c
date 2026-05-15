/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 14:43:35 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/11 15:05:42 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void    ft_strupcase(unsigned int i, char *c)
{
        (void)i;
        if (*c >= 'a' && *c <= 'z')
        {
                *c = *c - 32;
        }
}
int main()
{
        char str[] = "Falae rapazeada";

        printf("Original: %s\n", str);
	ft_striteri(str, ft_strupcase);
        printf("modificada: %s\n", str);

        return(0);
}*/
