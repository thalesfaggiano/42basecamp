/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex09.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:05:11 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 14:26:42 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[100] = "sALUt, coMMENt tu vAs ? 42mOts quArante-dEux; ciNquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
