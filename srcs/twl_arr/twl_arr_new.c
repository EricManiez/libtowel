/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_arr_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 22:09:03 by yyang             #+#    #+#             */
/*   Updated: 2015/01/19 14:39:20 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_arr.h>
#include <stdlib.h>

void	*twl_arr_new(size_t size)
{
	void **arr;

	arr = malloc(sizeof(void *) * (size + 1));
	arr[0] = NULL;
	return ((void *)arr);
}