/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_arr_cpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/13 13:41:44 by yyang             #+#    #+#             */
/*   Updated: 2015/01/30 15:29:12 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_arr.h>
#include <stdlib.h>

/*
** warning: NOT WORKING
*/

void	*twl_arr_cpy(void *arr)
{
	long	*twl_arr_tmp;
	long	*new_arr;
	int		i;

	twl_arr_tmp = (long *)arr;
	new_arr = (long *)malloc(sizeof(twl_arr_tmp) *
											(twl_arr_len(twl_arr_tmp) + 1));
	i = 0;
	while (twl_arr_tmp[i])
	{
		new_arr[i] = twl_arr_tmp[i];
		i++;
	}
	new_arr[i] = 0;
	return (new_arr);
}
