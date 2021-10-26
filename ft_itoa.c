/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:21:58 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:57:48 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* возвращает замалоченную строку с числом n */
#include "libft.h"

int	ft_razmer(int n)
{
	int	count;

	if (n == 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		num;
	int		count;
	char	*s;
	char	sign;

	num = n;
	sign = 1;
	count = ft_razmer(num) + (n < 0);
	if (n < 0)
		sign = -1;
	s = (char *)malloc(sizeof(char) * (count + 1));
	if (!s)
		return (NULL);
	s[count] = '\0';
	if (n == 0)
		s[--count] = 48;
	while (n != 0)
	{
		s[--count] = (n % 10) * (2 * (n > 0) - 1) + 48;
		n /= 10;
	}
	if (sign < 0)
		s[--count] = '-';
	return (s);
}
