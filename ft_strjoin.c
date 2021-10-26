/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:45:24 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 16:00:40 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* возвращает указатель на замалоченную конкатенацию строк s1 и s2 */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str)
		return (NULL);
	while (k < len_s1)
		str[i++] = s1[k++];
	k = 0;
	while (k < len_s2)
		str[i++] = s2[k++];
	str[i] = '\0';
	return (str);
}
