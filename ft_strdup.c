/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:07:37 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:59:11 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* возвращает указатель на замалоченный дубликат строки s */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	str = malloc(len + 1);
	if (str == 0)
		return (NULL);
	p = str;
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = '\0';
	return (str);
}
