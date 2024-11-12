/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houabell <houabell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:35:04 by houabell          #+#    #+#             */
/*   Updated: 2024/11/10 19:42:57 by houabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calclen(int n)
{
	size_t	tmp;
	int		len;

	tmp = n;
	len = 0;
	if (n < 0)
	{
		len = 1;
		tmp = -tmp;
	}
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	if (n == 0)
		return (1);
	return (len);
}

static char	*ft_converter(int n, int len)
{
	char	*result;
	long	num;

	num = n * 1;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while (len > 0)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
		if (num == 0 && result[0] == '-')
			break ;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = ft_calclen(n);
	result = ft_converter(n, len);
	return (result);
}
