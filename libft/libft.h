/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:36:25 by andede-s          #+#    #+#             */
/*   Updated: 2026/04/29 13:02:03 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int     ft_strlen(char const *str);
void	ft_bzero(void *str, int num);
void	ft_memcpy(void *dest, const void *str, int num);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(char const *str, char c);

#endif
