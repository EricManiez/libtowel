/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:20:55 by yyang             #+#    #+#             */
/*   Updated: 2014/11/13 19:00:52 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	twl_memswap(void *s1, void *s2, size_t len)
{
	void *tmp;

	tmp = twl_memalloc(len);
	twl_memcpy(tmp, s1, len);
	twl_memcpy(s1, s2, len);
	twl_memcpy(s2, tmp, len);
	free(tmp);
}