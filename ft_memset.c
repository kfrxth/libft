/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:26:24 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:56:14 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* заполняет n байт памяти байтом с. возвращает по сути тот же указатель, что получила на вход */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
