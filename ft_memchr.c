/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:29:23 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/13 15:55:31 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char d;
	unsigned char *p;

	i = 0;
	d = (unsigned char)c;
	p = (unsigned char*)s;
	while (i < n)
	{
		if (p[i++] == d)
			return (p + i - 1);
	}
	return (NULL);
}