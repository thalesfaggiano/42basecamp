/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:21:16 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/11 10:44:28 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_nbr(int nbr, char *base, int size);
int	ft_validation(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	size = ft_validation(base);
	if (size)
	{
		if (nbr < 0)
		{
			write(1, "\x2d", 1);
			ft_nbr(-nbr, base, size);
		}
		else
			ft_nbr(nbr, base, size);
	}
}

void	ft_nbr(int nbr, char *base, int size)
{
	if (nbr >= size)
		ft_nbr(nbr / size, base, size);
	write(1, &base[nbr % size] ,1);
}

int	ft_validation(char *base)
{
	int	i;
	int	k;

	i = -1;
	while (base[++i])
	{
		k = -1;
		if (base[i] == 0x2b || base[i] == 0x2d
			|| base[i] < 0x20 || base[i] > 0x7e)
			return (0);
		while (++k < i)
			if (base[k] == base[i])
				return (0);
	}
	if (i < 2)
		return (0);
	return (i);
}
