/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houabell <houabell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:56:24 by houabell          #+#    #+#             */
/*   Updated: 2024/11/06 02:38:59 by houabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (d == s)
		return (dst);
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s && s + len > d)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	while (len > 0)
	{
		*d++ = *s++;
		len--;
	}
	return (dst);
}
