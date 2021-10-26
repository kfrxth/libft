/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:59:48 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:58:55 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ищет первое вхождение символа с в строку s. область поиска ограничена strlen+1
(\0 рассматривается как часть строки) */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[i] == (unsigned char)c)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			s = s + i;
			return ((char *)s);
		}
		i++;
		if (s[i] == (unsigned char)c)
		{
			s = s + i;
			return ((char *)s);
		}
	}
	return (NULL);
}
