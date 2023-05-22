/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-haja <sal-haja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:20:48 by sal-haja          #+#    #+#             */
/*   Updated: 2023/05/19 12:42:00 by sal-haja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		it;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	it = 0;
	j = ft_strlen((char *)s1) - 1;
	while (is_in(s1[i], set))
		i++;
	while (is_in(s1[j], set))
		j--;
	if (i > j)
		return (ft_strdup(""));
	str = malloc(j - i + 2);
	if (!str)
		return (NULL);
	while (i <= j)
		str[it++] = (char)s1[i++];
	str[it] = '\0';
	return (str);
}
