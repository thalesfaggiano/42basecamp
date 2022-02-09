/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:06:51 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/09 15:43:39 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	power;
	int	number;

	number=0;
	power= 1;
	sign= 1;
	i = 0;
	--str;
	while (*++str == 0x20);
	--str;
	while (*++str == 0x2b || *str == 0x2d)
		if (*str == 0x2d)
			sign *= -1 ;
	--str;
	while (*++str > 0x2f && *str < 0x3a)
		++i;
	while (i)
	{
		number = number + ((*--str - '0') * power);
		power *= 10;
		--i;
		write(1,str,1);
	}
	return (number * sign);
}
