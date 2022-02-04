/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:55:58 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 14:12:05 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

//char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str = "Eu te amo meu amor lindo!";
	char	*to_find = "amor";
	char	strstr[100];
	//char	strstr2[100];

	strstr = strstr(str, to_find);
	printf("%s\n", strstr);
	//strstr2 = ft_strstr(str, to_find);
	//printf("%s\n", strstr2);
	return (0);
}
