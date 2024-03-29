/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:14:46 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:58:32 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* заполняет n байт памяти нулями. ничего не возвращает */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
		*ptr++ = '\0';
}
