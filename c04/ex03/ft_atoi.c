/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:06:51 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/09 16:10:06 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	--str;
	while (*++str == 0x20 || (*str >= 0x09 && *str <= 0x0d));
	--str;
	while (*++str == 0x2b || *str == 0x2d)
		if (*str == 0x2d)
			sign *= -1 ;
	while (*str > 0x2f && *str < 0x3a)
		number = (number * 10) + (*str++ - '0');
	return (number * sign);
}
