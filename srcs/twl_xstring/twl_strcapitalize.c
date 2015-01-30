/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_strcapitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:49:52 by yyang             #+#    #+#             */
/*   Updated: 2015/01/30 16:13:55 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*twl_strcapitalize(char *str)
{
	int		i;
	int		prev_is_letter;

	if (!str)
		return (void *)0;
	prev_is_letter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (!prev_is_letter)
				str[i] = str[i] - 32;
			prev_is_letter = 1;
		}
		else
		{
			prev_is_letter = 0;
		}
		if (str[i] >= 48 && str[i] <= 57)
			prev_is_letter = 1;
		i++;
	}
	return (str);
}
