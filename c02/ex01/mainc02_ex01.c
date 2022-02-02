/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 06:24:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 07:19:06 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char		src[10] = "Ola Mundo!";
	char		dest[10];

	printf("%s\n",strncpy(dest, src, 5));
	printf("%s\n",ft_strncpy(dest, src, 5));
	return (0);
}
