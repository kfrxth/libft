/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:44:21 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:57:04 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* сравнивает n байт участков памяти. возвращает 0 если участки идентичны.
возвращает 1 если встретились различающиеся байты и *s1 > *s2. иначе -1 */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ch1;
	unsigned char	*ch2;

	ch1 = (unsigned char *)s1;
	ch2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ch1 - *ch2 != 0)
			return (*ch1 - *ch2);
		ch1++;
		ch2++;
	}
	return (0);
}
