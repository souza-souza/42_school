/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 14:09:58 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/11 14:34:46 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char c))
{
	char	*res;
	unsigned int	i;

	if (!s || !f)
		return(0);
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char	ft_strupcase(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')		
	{
		c = c - 32;
	}
	return (c);
}
int main()
{
	char str[] = "Falae rapazeada";
	char *resultado;

	resultado = ft_strmapi(str, ft_strupcase);

	printf("Original: %s\n", str);
	printf("modificada: %s\n", resultado);
	
	return(0);
}*/
