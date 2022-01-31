/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:26:27 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/30 17:12:52 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0x2f;
	while (++a < 0x38)
	{
		b = a;
		while (++b < 0x39)
		{
			c = b;
			while (++c < 0x3a)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a == 0x37)
					break ;
				write(1, ", ", 2);
			}
		}
	}
}
