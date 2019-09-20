/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:25:00 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/20 17:34:21 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int						i;
	unsigned long int		nbr;
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
		nbr *= 10;
		nbr = nbr + (str[i++] - '0');
		if (nbr > 2147483647 && neg == 1)
			return (-1);
		if (nbr > 2147483648 && neg == -1)
			return (0);
	}
	return (neg * nbr);
}
