/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_arr_filter_del.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 09:29:17 by yyang             #+#    #+#             */
/*   Updated: 2015/02/15 15:17:54 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_arr.h>
#include "twl_printf.h"

void	*twl_arr_filter_del(void *arr_, t_bool (*filter_fn)
			(void *data, void *context), void *context, void (*delfn)(void *))
{
	void **arr;
	void **filtered_arr;
	int i;

	arr = arr_;
	filtered_arr = twl_arr_new(twl_arr_count(arr, filter_fn, context));
	i = 0;
	while (arr[i])
	{
		if (filter_fn(arr[i], context))
			twl_arr_push(filtered_arr, arr[i]);
		else if (delfn)
			delfn(arr[i]);
		i++;
	}
	if (delfn)
		free(arr);
	return (filtered_arr);
}
