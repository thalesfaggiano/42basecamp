/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:42:50 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 11:06:03 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[13] = "/0123456789:";
	int	i;

	i = ft_str_is_numeric(str);
	if (i)
		printf("It IS Numeric\n");
	else
		printf("It's NOT Numeric\n");
	return (0);
}
