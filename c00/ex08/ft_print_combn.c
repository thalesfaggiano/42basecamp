/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 07:48:06 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/31 18:11:03 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn(int n)
{
	int	count[n];
	int	max;
	int	i;
	char	c;

	i = n;
	max = n;
	if (n > 9 && n < 1)
		return ;
	while(i--)
	{
		count[i] = i;
	}
	while(++i < max)
	{
		c = count[i] + 0x30;
		write(1, &c, 1);
	}
}
