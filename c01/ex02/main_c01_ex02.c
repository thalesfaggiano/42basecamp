/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c01_ex02.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:20:43 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 11:39:11 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("a = %d\nb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return (0);
}
