/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex05.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:47:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/06 09:51:12 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[20] = "Tha";
	char	src[20] = "lesTha";
	char	dest1[20] = "Tha";
	char	src1[20] = "lesTha";
	unsigned int	a;
	unsigned int	b;

	a = strlcat(dest, src, (unsigned) 7);
	printf("dest- %s\nsrc - %s\nsize = %d\n", dest, src, a);
	b = ft_strlcat(dest1, src1, (unsigned) 7);
	printf("dest -%s\nsrc - %s\nsize = %d\n", dest1, src1, b);
	return (0);
}
