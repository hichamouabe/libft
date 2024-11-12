/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houabell <houabell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:17:05 by houabell          #+#    #+#             */
/*   Updated: 2024/11/01 21:31:48 by houabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_error_handler(char **result, size_t k);

static size_t	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_devider(char **result, const char *s, char c, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] && k < count)
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			result[k] = ft_substr(s, i, j - i);
			if (!result[k++])
			{
				ft_error_handler(result, k - 1);
				return (NULL);
			}
			i = j;
		}
		else
			i++;
	}
	return (result);
}

static void	ft_error_handler(char **result, size_t k)
{
	while (k > 0)
		free(result[--k]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = NULL;
	if (!ft_devider(result, s, c, count))
		return (NULL);
	return (result);
}
