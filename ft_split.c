/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-haja <sal-haja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:04:44 by sal-haja          #+#    #+#             */
/*   Updated: 2023/05/19 15:13:05 by sal-haja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_count(char const *str, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	while (*str != '\0')
	{
		if (*str == c)
			in_substring = 0;
		else if (in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static void	free_grid(char	**t)
{
	int	i;

	i = 0;
	while (t[i] != NULL)
		free(t[i++]);
	free(t);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		nb_word;
	char	*from;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	nb_word = get_word_count((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (get_word_count((const char *)s, c) + 1));
	if (!t)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s)
			s++;
		from = (char *)s;
		while (*s != c && *s)
			s++;
		t[i++] = ft_substr(from, 0, s - from);
		if (t[i - 1] == NULL)
			free_grid(t);
	}
	t[i] = NULL;
	return (t);
}
