/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01_ex05.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:13:46 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 14:26:30 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char string[10] = "ThalesRF";
	ft_putstr(&string[0]);
	return (0);
}
