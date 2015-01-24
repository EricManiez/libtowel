/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:45:53 by yyang             #+#    #+#             */
/*   Updated: 2014/11/12 22:06:07 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		twl_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z')
	|| (c >= 'A' && c <= 'Z'));
}