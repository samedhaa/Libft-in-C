/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-haja <sal-haja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:59:15 by sal-haja          #+#    #+#             */
/*   Updated: 2023/05/19 11:39:58 by sal-haja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		tmp;

	i = 0;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (str1 > str2)
	{
		while (n)
		{
			n--;
			tmp = *((unsigned char *)str2 + n);
			*((unsigned char *)str1 + n) = (unsigned char)tmp;
		}
	}
	else
	{
		while (i < n)
		{
			tmp = *((unsigned char *)str2 + i);
			*((unsigned char *)str1 + i) = (unsigned char)tmp;
			i++;
		}
	}
	return (str1);
}
