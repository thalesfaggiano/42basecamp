/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:21:16 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/11 10:16:06 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_nbr(int nbr, char *base, int size);
int	*ft_validation(char *base);
int	g_size;

void	ft_putnbr_base(int nbr, char *base)
{
	if (*ft_validation(base))
		ft_nbr(nbr, base, *ft_validation(base));
}

void	ft_nbr(int nbr, char *base, int size)
{
	char	number[100];
	int	i;
	
	i = -1;
	while (nbr)
	{
		number[++i] = base[nbr % size];
		nbr /= size;
	}
	while (i + 1)
		write(1, &number[i--] ,1);
}

int	*ft_validation(char *base)
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
	g_size = i;
	return (&g_size);
}
