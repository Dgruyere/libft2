/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:46:29 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/19 19:57:50 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = n < (size_t)ft_strlen(dst) ? n : ft_strlen(dst);
	lensrc = (size_t)ft_strlen(src) == n - lendst ?
		ft_strlen(src) - 2 : ft_strlen(src);
	if (n == lendst)
		return (lensrc + n);
	if (lensrc < n - lendst)
		ft_memcpy(dst + lendst, src, lensrc + 1);
	else
	{
		ft_memcpy(dst + lendst, src, n - 1);
		dst[lendst + n - 1] = '\0';
	}
	return (lendst + lensrc);
}
