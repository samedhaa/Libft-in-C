/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-haja <sal-haja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:32:09 by sal-haja          #+#    #+#             */
/*   Updated: 2023/05/13 17:47:40 by sal-haja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getsize(long long n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (1 + getsize(-n));
	return (1 + getsize(n / 10));
}

static	char	*get_ans(long long n, char *str, int i)
{
	char	c;

	if (n == 0)
		str[0] = '0';
	while (n)
	{
		c = ('0' + (n % 10));
		str[i] = c;
		n /= 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			sz;
	long long	n2;

	n2 = n;
	sz = getsize(n2) + (n2 == 0);
	str = (char *)malloc(sz + 1);
	if (str == NULL)
		return (NULL);
	if (n2 < 0)
	{
		n2 = -n2;
		str[0] = '-';
	}
	str[sz] = '\0';
	return (get_ans(n2, str, sz - 1));
}
