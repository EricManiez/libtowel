/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_arr_to_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 22:29:22 by annguyen          #+#    #+#             */
/*   Updated: 2015/01/30 15:35:53 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_lst.h>
#include <twl_arr.h>
#include <stdlib.h>

static void		push_to_lst(void *elem, void *lst)
{
	twl_lst_push(lst, elem);
}

t_lst			*twl_arr_to_lst(void *arr)
{
	t_lst *lst;

	lst = twl_lst_new();
	twl_arr_iter(arr, push_to_lst, lst);
	return (lst);
}
