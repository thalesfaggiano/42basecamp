/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:47:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 09:44:42 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "i";
	char	*s2 = "ii";
	int	a;
	int	b;

	a = strcmp(s1, s2);
	printf(" a - %d\ns1 - %s\ns2 - %s\n", a, s1, s2);
	b = ft_strcmp(s1, s2);
	printf(" b - %d\ns3 - %s\ns4 - %s\n", b, s1, s2);
	return (0);
}
