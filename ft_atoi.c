/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:25:00 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/07 13:26:25 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int neg;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		if (str[i] == '-')
			neg = 1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr *= 10;
			nbr = nbr + (str[i] - '0');
		}
		i++;
		if ((str[i] < '0' && str[i] >= '!') || str[i] > '9')
			break ;
	}
	if (neg)
		return (-nbr);
	return (nbr);
}
