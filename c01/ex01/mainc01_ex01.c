/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01_ex01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:20:10 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 10:52:11 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	n;
	int	*n2 = &n;
	int	**n3 = &n2;
	int	***n4 = &n3;
	int	****n5 = &n4;
	int	*****n6 = &n5;
	int	******n7 = &n6;
	int	*******n8 = &n7;
	int	********n9 = &n8;

	ft_ultimate_ft(&n9);
	printf("%d\n", n);
	return (0);
}
