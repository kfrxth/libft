/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:06:04 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 16:15:01 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* возвращает указатель на занулённую область памяти (под count объектов размера size каждый) */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == NULL)
		return (str);
	ft_bzero(str, count * size);
	return (str);
}
