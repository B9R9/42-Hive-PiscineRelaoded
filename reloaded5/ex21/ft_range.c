/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:52:49 by briffard          #+#    #+#             */
/*   Updated: 2021/11/02 15:15:42 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*arr;

	i = 0;
	if (min > max || min == max)
		return (arr = NULL);
	else
	{
		arr = (int *)malloc (sizeof(int) * ((max - min) + 1));
		if (arr == NULL)
			return (0);
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		arr[i] = '\0';
	}
	return (arr);
}
