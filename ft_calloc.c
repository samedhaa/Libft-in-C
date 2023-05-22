/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-haja <sal-haja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:51:48 by sal-haja          #+#    #+#             */
/*   Updated: 2023/05/22 10:51:25 by sal-haja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	len = nmemb * size;
	if (nmemb == 0 || len / nmemb != size)
		return (NULL);
	if ((len < nmemb || len < size) && nmemb != 0 && size != 0)
		return (NULL);
	ptr = (void *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, len);
	return (ptr);
}
