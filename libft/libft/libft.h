/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:36:25 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/07 11:11:29 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;

int     ft_strlen(char const *str);
void	ft_bzero(void *str, int num);
void	ft_memcpy(void *dest, const void *str, int num);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(char const *str, char c);
int	ft_strlcpy(char const *str, char const *dest, size_t size);

#endif
