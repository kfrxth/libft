/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:45:56 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:56:47 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* заполняет n байт памяти байтом с. возвращает по сути тот же указатель, что получила на вход */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const void	*s;
	void		*d;

	if (!dst && !src)
		return (dst);
	d = dst;
	s = src;
	while (n--)
	{
		*(unsigned char *)(d++) = *(unsigned char *)(s++);
	}
	return (dst);
}
