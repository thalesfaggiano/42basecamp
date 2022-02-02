/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:11:33 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 11:21:16 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[10] = "thales ";
	int	i;

	i = ft_str_is_lowercase(str);
	if (i)
		printf("It is lower\n");
	else
		printf("It's NOT lower\n");
	return (0);
}
