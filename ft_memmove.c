/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:54:35 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:56:28 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* заполняет n байт памяти байтом с. возвращает по сути тот же указатель, что получила на вход */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (src < dst)
	{
		while (len--)
		{
			*(a + len) = *(b + len);
		}
	}
	else if (src > dst)
	{
		while (len--)
		{
			*a = *b;
			a++;
			b++;
		}
	}
	return (dst);
}
