/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-haja <sal-haja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:11:01 by sal-haja          #+#    #+#             */
/*   Updated: 2023/05/15 10:19:42 by sal-haja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	holder;

	i = 0;
	holder = -1;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			holder = i;
		}
		i++;
	}
	if (c == '\0')
		return ((char *) str + i);
	if (holder == -1)
		return (NULL);
	return ((char *) str + holder);
}
