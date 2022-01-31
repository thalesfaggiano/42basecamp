/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:45:38 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/30 21:50:53 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_putchar(a / 10 + 0x30);
			ft_putchar(a % 10 + 0x30);
			ft_putchar(0x20);
			ft_putchar(b / 10 + 0x30);
			ft_putchar(b % 10 + 0x30);
			if (a / 10 + 0x30 == 0x39 && a % 10 + 0x30 == 0x38)
				break ;
			write(1, ", ", 2);
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
