/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:40:29 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/28 13:53:24 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, int n)
{
    const unsigned char *s1 = (const unsigned char *)str1;
    const unsigned char *s2 = (const unsigned char *)str2;
    int i;

    i = 0;
    while(n > 0)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
        n--;
    }
    return (0);
}
/*int main()
{
    char str1[] = "fala rapazeadinha do yt";
    char str2[] = "falae rapazeadinha do yt";
    int res;

    res = ft_memcmp(str1, str2, ft_strlen(str1));

    printf("a diferenca entre as duas string e de: %d", res);
}*/
