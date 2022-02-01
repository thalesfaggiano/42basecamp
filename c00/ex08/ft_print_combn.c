/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 07:48:06 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/31 20:18:02 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static char	g_c[9];

void	ft_rec(int size, int i, char dig);

void	ft_print_combn(int n)
{
	if (n < 10 && n > 0)
		ft_rec(n, 0, 0x30);
}

void	ft_rec(int size, int i, char dig)
{
	if (i == size)
	{
		write(1, g_c, size);
		if (g_c[0] < 0x3a - size)
			write(1, ", ", 2);
	}
	else
	{
		while (dig < 0x3a)
		{
			g_c[i] = dig;
			ft_rec(size, i + 1, dig + 1);
			++dig;
		}
	}
}
