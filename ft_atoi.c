/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:25:00 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/22 15:53:30 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int						i;
	unsigned long long int	nbr;
	int						neg;

	i = 0;
	nbr = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i++] - '0');
		if ((nbr * 10 > 9223372036854775807 || nbr > 9223372036854775807) &&
				neg == 1)
			return (-1);
		if ((nbr * 10 > 9223372036854775808ULL || nbr > 9223372036854775808ULL) &&
				neg == -1)
			return (0);
	}
	return (neg * nbr);
}

int main()
{
  printf("%d\n", ft_atoi("22222222222222222222"));
  printf("%d\n",atoi("22222222222222222222"));
}
