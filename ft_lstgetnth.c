/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetnth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:31:29 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/20 13:59:22 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstgetnth(t_list *lst, int n)
{
	int count;

	while (lst)
	{
		while (count < n && lst)
		{
			lst = lst->next;
			count++;
		}
		return (lst);
	}
}
