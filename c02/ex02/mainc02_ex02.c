/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 07:33:12 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 08:39:06 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[10] = "AAaxlz";
	int	i;

	i = ft_str_is_alpha(str);
	if (i)
		printf("Only Alpha\n");
	else
		printf("Not Alpha\n");
	return (0);
}
