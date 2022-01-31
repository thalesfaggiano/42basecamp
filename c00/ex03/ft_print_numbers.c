/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:56:28 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/30 15:00:48 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	c;

	c = 0x2f;
	while (c++ < 0x39)
	{
		ft_putchar(c);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
