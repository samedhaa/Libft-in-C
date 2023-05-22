/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-haja <sal-haja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:36:38 by sal-haja          #+#    #+#             */
/*   Updated: 2023/05/11 12:17:28 by sal-haja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*copied;

	copied = malloc(sizeof(char) * (ft_strlen(src)+1));
	if (!(copied))
		return (NULL);
	i = 0;
	while (i < ft_strlen(src))
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}
