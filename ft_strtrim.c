/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:27:33 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 16:03:16 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* возвращает указатель на замолоченную строку
 содержимое новой строки это остаток от s1, подрезанной с начала и с конца.
выкидываем с начала и с конца символы, которые содержатся в строке set */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && len)
		len--;
	str = ft_substr(s1, 0, len + 1);
	return (str);
}
