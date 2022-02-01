/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01_ex04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:03:40 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 14:08:59 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 2;
	printf("a = %d\nb = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d\nmod = %d\n", a, b);
	return (0);
}
