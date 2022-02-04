/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:47:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 09:43:41 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "Thales";
	char	*s2 = "Roberto";
	int	a;
	int	b;
	int	n;

	n = 3;
	a = strncmp(s1, s2, n);
	printf(" a - %d\ns1 - %s\ns2 - %s\n", a, s1, s2);
	b = ft_strncmp(s1, s2, n);
	printf(" b - %d\ns3 - %s\ns4 - %s\n", b, s1, s2);
	return (0);
}
