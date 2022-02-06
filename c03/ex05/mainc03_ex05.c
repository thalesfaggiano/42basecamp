/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex05.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:47:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/05 21:17:32 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[20] = "Tha";
	char	src[20] = "lesTha";
	char	dest1[20] = "Tha";
	char	src1[20] = "lesTha";

	strlcat(dest, src, (unsigned) 7);
	printf("dest- %s\nsrc - %s\n", dest, src);
	ft_strlcat(dest1, src1, (unsigned) 7);
	printf("dest -%s\nsrc - %s\n", dest1, src1);
	return (0);
}
