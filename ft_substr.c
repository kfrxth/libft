/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:45:37 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 16:37:35 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* возвращает указатель на замолоченную подстроку строки s.
подстрока начинается с позиции s + start и имеет максимальную длину maxlen.
 возвращает пустую строку в случае, если индекс вне пределов строки (source: Sky) */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	int		st;
	char	*sub_str;

	st = start;
	i = 0;
	if (!s && !start)
		return (NULL);
	while (st < ft_strlen(s) && s[st])
	{
		i++;
		st++;
	}
	if (i > len)
		i = len;
	sub_str = malloc(i + 1);
	if (!sub_str)
		return (NULL);
	len = 0;
	while (i-- && s[start])
		sub_str[len++] = s[start++];
	sub_str[len] = '\0';
	return (sub_str);
}
