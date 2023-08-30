/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:37:43 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/26 17:05:01 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_strings(const char *s, char c)
{
	unsigned int	res;
	int				i;

	res = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			res++;
			while (s[i] != 0 && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	unsigned int	i;
	unsigned int	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (ret == 0)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}
