/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgruyere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:25:15 by dgruyere          #+#    #+#             */
/*   Updated: 2019/09/20 18:33:49 by dgruyere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_dup;
	t_list	*res; //первый элемент нового списка
	t_list	*restail; //последний элемент нового списка
	
	lst_dup = f(lst);
	res = NULL;
	restail = NULL;
	while (lst)
	{

		if (!(lstnew(lst_dup->content, lst_dup->content_size)))
		{
		}
		else
		{
			tail->next = malloc(sizeof(struct node));
			tail = tail->next;
			tail->data = current->data;
			tail->next = NULL;
		}
		current = current->next;
	}
	return(newList);
}*/
