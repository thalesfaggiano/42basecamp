/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:33:45 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/30 14:36:10 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 0x7b;
	while (c-- > 0x61)
	{
		ft_putchar(c);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
