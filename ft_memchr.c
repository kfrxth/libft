/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:45:17 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:57:33 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ищет первое вхождение символа с в область памяти s, ограниченной n байт
возвращает указатель на искомый байт, либо NULL, если не найдено */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ch;

	ch = s;
	while (n--)
	{
		if (*ch == (unsigned char)c)
			return ((void *)ch);
		ch++;
	}
	return (0);
}
