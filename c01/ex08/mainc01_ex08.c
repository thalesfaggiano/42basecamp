/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01_ex08.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:26:10 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 21:24:22 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[10];
	int size;
	int i;

	tab[0] = 0;
	tab[1] = 4;
	tab[2] = 7;
	tab[3] = 35;
	tab[4] = 3;
	tab[5] = 31;
	tab[6] = 3;
	tab[7] = 332;
	tab[8] = 30;
	tab[9] = -3;
	size = 10;
	i = -1;
	while (++i < size)
		printf("%d,",tab[i]);
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = -1;
	while (++i < size)
		printf("%d,",tab[i]);
	printf("\n");
	return (0);
}
