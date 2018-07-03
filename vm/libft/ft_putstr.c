/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:09:30 by hdanylev          #+#    #+#             */
/*   Updated: 2017/11/04 13:08:09 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(char const *str)
{
	int	i;

	if (str != NULL)
	{
		i = 0;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}