/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_lst_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/19 10:51:42 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/30 15:46:02 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_lst.h>

void		*twl_lst_find(t_lst *lst, int (*f)(void *data, void *context),
																void *context)
{
	t_twl_lst_elem	*elem;

	elem = lst->head;
	while (elem)
	{
		if (f(elem->data, context))
			return (elem->data);
		elem = elem->next;
	}
	return (NULL);
}
