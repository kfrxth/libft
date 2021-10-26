/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:50:59 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 16:02:42 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ищет первое вхождение подстроки little в строку big. поиск по big ограничен len количеством символов.
возвращает поинтер на найденное вхождение / либо NULL. если little - пустая строка, возвращает big. */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t big_len)
{
	size_t	i;
	size_t	small_len;
	char	s;

	s = *small;
	i = 1;
	small_len = ft_strlen(small);
	if (!*small)
		return ((char *)big);
	while (big_len)
	{
		if (!*big)
			return (0);
		else if (small_len > big_len)
			return (0);
		if (!ft_strncmp(big, small, small_len))
			return ((char *)big);
		big_len--;
		big++;
	}
	return (NULL);
}
