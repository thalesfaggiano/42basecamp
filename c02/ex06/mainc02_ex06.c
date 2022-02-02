/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex06.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:46:54 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 11:55:42 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[10] = "1234\tads";
	int	i;

	i = ft_str_is_printable(str);
	if (i)
		printf("It IS printable\n");
	else
		printf("It's NOT printable\n");
	return (0);
}
