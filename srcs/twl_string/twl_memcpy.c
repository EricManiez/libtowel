/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:45:53 by yyang             #+#    #+#             */
/*   Updated: 2015/01/30 16:11:20 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*twl_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*chardst;
	unsigned char	*charsrc;
	size_t			index;

	chardst = (unsigned char *)dst;
	charsrc = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		chardst[index] = charsrc[index];
		index++;
	}
	return (dst);
}
