/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:56:36 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/28 14:12:43 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
    const unsigned char *s = (const unsigned char *)str;
    const unsigned char uc = (unsigned char)c;
    int i;

    i = 0;
    while(n > 0)
    {
        if (s[i] == uc)
            return ((void *)&s[i]);
        i++;
        n--;
    }
    return (0);
}
/*int main()
{
    char str[] = "fala rapazeadinha do yt";
    const char c = 'z';
    char *res;

    res = ft_memchr(str, c, ft_strlen(str));

    if (res == NULL)
        printf("caractere nao encontrado");
    else
        printf("caractere encontrado pela primeira vez na posicao: %ld", res - str);
    return (0);
}*/
