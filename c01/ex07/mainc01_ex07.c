/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01_ex07.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:02:49 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 19:47:31 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	i;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	tab[5] = 5;
	tab[6] = 6;
	tab[7] = 7;
	tab[8] = 8;

	i = 0;
	while (i < 9)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 9);
	i = 0;
	while (i < 9)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
