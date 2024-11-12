/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houabell <houabell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:43:20 by houabell          #+#    #+#             */
/*   Updated: 2024/10/28 16:51:21 by houabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	copy_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (destsize > 0)
	{
		if (destsize - 1 > src_len)
			copy_len = src_len;
		else
			copy_len = destsize - 1;
		ft_memcpy(dst, src, copy_len);
		dst[copy_len] = '\0';
	}
	return (src_len);
}
