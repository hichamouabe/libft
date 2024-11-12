/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:25:45 by houabell          #+#    #+#             */
/*   Updated: 2024/10/28 16:51:50 by houabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	c = (char)c;
	while (*p)
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	if (*p == c)
	{
		return (p);
	}
	return (0);
}