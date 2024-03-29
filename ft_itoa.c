/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:37:55 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/19 20:06:07 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		getnbsize(int n)
{
	unsigned int size;

	size = 0;
	while (n /= 10)
		size++;
	return (size + 1);
}

char				*ft_itoa(int n)
{
	unsigned int		size;
	char				*res;
	unsigned int		nb;
	int					i;

	size = getnbsize(n);
	if (n < 0)
		nb = (unsigned int)(-n);
	if (n < 0)
		size++;
	else
		nb = (unsigned int)(n);
	if (!(res = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (n < 0)
		res[0] = '-';
	i = size - 1;
	while (nb >= 10)
	{
		res[i--] = (char)(nb % 10 + '0');
		nb /= 10;
	}
	res[i] = (char)(nb % 10 + '0');
	res[size] = '\0';
	return (res);
}
