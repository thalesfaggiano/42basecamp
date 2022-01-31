/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:05:39 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/30 15:18:35 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	int	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
