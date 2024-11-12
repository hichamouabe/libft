/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:43:36 by houabell          #+#    #+#             */
/*   Updated: 2024/10/28 16:31:23 by houabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *)s;
	c = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (p[i] == c)
		{
			return (&p[i]);
		}
		i--;
	}
	if (*p == c)
	{
		return (p);
	}
	return (NULL);
}
