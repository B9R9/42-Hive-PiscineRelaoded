/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:05:19 by briffard          #+#    #+#             */
/*   Updated: 2021/11/02 12:24:36 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char	**tab, int	(*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			count ++;
		i++;
	}
	return (count);
}
