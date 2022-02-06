/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc04_ex00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:10:02 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/06 20:22:14 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	a[10] = "Thales";
	char	b[10] = "Thales";
	int 	ax;
	int 	bx;

	ax = strlen(a);
	bx = ft_strlen(b);
	printf("%d\n",ax);
	printf("%d\n",bx);
	return (0);
}
