/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:55:58 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 18:00:15 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str = "Eu te amo meu amor lindo!";
	char	*to_find = " ";
	char	*strstr1;
	char	*strstr2;

	strstr1 = strstr(str, to_find);
	printf("1 - %s\n", strstr1);
	strstr2 = ft_strstr(str, to_find);
	printf("2 - %s\n", strstr2);
	return (0);
}
