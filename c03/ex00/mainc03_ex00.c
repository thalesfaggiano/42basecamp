/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:47:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 09:27:33 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "ii";
	char	*s2 = "iii";
	char	*s3 = "ii";
	char	*s4 = "iii";
	int	a;
	int	b;

	a = strcmp(s1, s2);
	printf(" a - %d\ns1 - %s\ns2 - %s\n", a, s1, s2);
	b = ft_strcmp(s3, s4);
	printf(" b - %d\ns3 - %s\ns4 - %s\n", b, s3, s4);
	return (0);
}
