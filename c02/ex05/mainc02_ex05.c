/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex05.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:25:38 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 11:33:20 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[10] = "[THALES";
	int	i;

	i = ft_str_is_uppercase(str);
	if (i)
		printf("It IS upper\n");
	else
		printf("It's NOT upper\n");
	return (0);
}
