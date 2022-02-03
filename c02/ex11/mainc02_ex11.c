/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex11.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:56:55 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 20:35:18 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[100] = "\n\amo\r\a\ti\nh\0";

	ft_putstr_non_printable(str);
	printf("\n");
	return (0);
}
