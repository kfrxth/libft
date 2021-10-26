/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baaegon <baaegon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:27:49 by baaegon           #+#    #+#             */
/*   Updated: 2021/10/26 15:56:03 by baaegon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* возвращает указатель на замалоченный массив строк, полученный разбивкой s по разделителю c */
#include "libft.h"

int	ft_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (count);
}

char	*ft_w1(const char *str, char c)
{
	int		i;
	char	*w1;

	i = 0;
	while (*str && *str == c)
		str++;
	while (str[i] && str[i] != c)
		i++;
	w1 = malloc(sizeof(char) * (i + 1));
	if (w1 == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		w1[i] = str[i];
		i++;
	}
	w1[i] = '\0';
	return (w1);
}

void	ft_free(int i, char **ptr)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**p_words;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	p_words = malloc(sizeof(char *) * (words + 1));
	if (p_words == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		p_words[i] = ft_w1(s, c);
		if (p_words[i] == NULL)
			ft_free(i, p_words);
		while (*s && *s != c)
			s++;
		i++;
	}
	p_words[i] = NULL;
	return (p_words);
}
