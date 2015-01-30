/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_strtrimc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 11:11:34 by yyang             #+#    #+#             */
/*   Updated: 2015/01/30 16:14:36 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_xstring.h>
#include <twl_string.h>

char	*twl_strtrimc(char const *s, char c)
{
	int start;
	int end;

	if (!s)
		return (NULL);
	start = 0;
	end = twl_strlen(s) - 1;
	while (s[start] == c)
		start++;
	if (start >= end)
		return (twl_strdup(""));
	while (s[end] == c)
	{
		end--;
	}
	return (twl_strsub(s, start, end - start + 1));
}
