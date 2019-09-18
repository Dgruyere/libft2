/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:13:01 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/18 22:33:01 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wcounter(char const *s, char c)
{
	int	i;
	int word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			word++;
		i++;
	}
	return (word);
}

static int		wlencounter(char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char				**res;
	unsigned int		i;
	unsigned int		k;

	i = 0;
	k = 0;
	if (!s || !(res = (char**)malloc(sizeof(char**) * (wcounter(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if(!(res[k] = ft_strsub(s, i, wlencounter(s, c, i))))
				return (NULL);
			k++;
			i += wlencounter(s, c, i);
		}
		else
			i++;
	}
	res[k] = NULL;
	return (res);
}
