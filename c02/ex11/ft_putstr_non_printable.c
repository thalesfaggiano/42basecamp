/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:57:50 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 21:16:06 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	*dig;
	char	hex[3];
	
	dig = "0123456789abcdef";
	i = -1;
	while (str[++i])
		if (str[i] > 0x1f && str[i] < 0x7f)
			write(1, &str[i], 1);
		else
		{
			hex[0] = 0x5c;
			hex[1] = dig[(str[i] & 0xf0) >> 4];
			hex[2] = dig[(str[i] & 0x0f)];
			write(1, hex, 3);
		}
}
