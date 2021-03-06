/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_xstdlib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 19:24:29 by yyang             #+#    #+#             */
/*   Updated: 2015/02/15 12:10:10 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWL_XSTDLIB_H
# define TWL_XSTDLIB_H

char		*twl_joinpath(char *s1, char *s2);
void		*twl_xmalloc(int size);
void		*twl_malloc_x0(int size);

#endif
