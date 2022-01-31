/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:12:19 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/31 07:23:53 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_number(int nb);

void	ft_putnbr(int nb)
{
	if (!nb)
	{
		ft_putchar(0x30);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar(0x2d);
		nb *= -1;
	}
	ft_print_number(nb);
}

void	ft_print_number(int nb)
{
	int	nb_tmp[11];
	int	nb_size;

	nb_tmp[0] = nb;
	nb_size = 0;
	while (nb_tmp[0])
	{
		nb_tmp[nb_size + 1] = nb_tmp[0] % 10;
		nb_tmp[0] /= 10;
		++nb_size;
	}
	nb_tmp[0] = nb;
	while (nb_size--)
		ft_putchar(nb_tmp[nb_size + 1] + 0x30);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
