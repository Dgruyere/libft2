/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:28:10 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/20 17:28:20 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void) 
{
	char	*dest;
	char	*dest1;

	dest = (char *)malloc(sizeof(*dest) * 7);
	dest1 = (char *)malloc(sizeof(*dest1) * 7);
	memset(dest, 0, 7);
	memset(dest, 'r', 6);
	//dest[14] = 'a';
	strcpy(dest1, dest);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(dest1);
	ft_putchar('\n');
	char s1[] = "asdasfsaf";
	char s2[] = "lorem ipsum dolor sit amet";
	printf("\n\n atoi(--47) = %d\n\n", atoi("--47"));
	printf("ft  %zu\ndest = %s\nmem %zu\ndest = %s\n", ft_strlcat(dest, s2, 15), dest, strlcat(dest1, s2, 15), dest1);
	return 0;
}
