/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc04_ex02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:52:53 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/06 22:52:15 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	i;

	ft_putnbr(-2147483646);
	printf("\n");
	i = -21;
	while (++i < 21)
	{
		ft_putnbr(i);
		printf("\n");
	}
	ft_putnbr(2147483646);
	printf("\n");
	ft_putnbr(0);
	return (0);
}
