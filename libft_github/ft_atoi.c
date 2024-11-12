/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houabell <houabell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:08:56 by houabell          #+#    #+#             */
/*   Updated: 2024/11/09 16:09:35 by houabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handled(const char *str, int sign)
{
	long	result;
	long	max;

	result = 0;
	max = LONG_MAX / 10;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - '0');
		if (result >= max)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		str++;
	}
	return ((int)result * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	return (ft_handled(str, sign));
}
