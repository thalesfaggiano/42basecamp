/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:13:30 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 14:34:29 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i++] != 0x00);
	write(1, &str[0], i);
}
