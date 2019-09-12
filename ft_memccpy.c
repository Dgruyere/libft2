/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:44:37 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/12 20:09:15 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	d;
	size_t			i;
	unsigned char	*p;
	unsigned char	*p1;
	
	p = (unsigned char*)dst;
	p1 = (unsigned char*)src;
	d = (unsigned char)c;
	i = 0;
	while ((*p != c) || i < n)
	{
		*(p++) = *(p1++);
		i++;
	}
	return (dst);
}
