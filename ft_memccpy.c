/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:44:37 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/13 17:04:59 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *p;
	unsigned char *p1;
	unsigned char *pmem;

	i = 0;
	/*if (!(dst) && !(src))
	   return (dst);	
	p = (unsigned char*)dst;
	p1 = (unsigned char*)src;
	while (i < n)
	{
		if (*p == (unsigned char)c)
			return (dst + i + 1) ;
		*(p++) = *(p1++);
		i++;
	}
	return (NULL);
	*/
	p = (unsigned char*)dst;
	p1 = (unsigned char*)src;
	pmem = (unsigned char*)ft_memchr(src, c, n);
	if (pmem)
	{
		ft_memcpy(dst, src, pmem - p1 + 1);
		return (dst + (pmem - p1 + 1));
	}
	ft_memcpy(dst, src, n);
	return (NULL);
}
