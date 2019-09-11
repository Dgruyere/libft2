/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:29:59 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/11 20:12:49 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t				i;

	i = 0;
	ptr = (unsigned char*)(b);
	while (ptr[i] && (i < len))
	{
		ptr[i] = c;
		i++;
	}
	return(b = ptr);
}
