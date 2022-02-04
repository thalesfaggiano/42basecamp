/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:47:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 13:49:25 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[10] = "Tha";
	char	src[10] = "lesTha";
	char	dest1[10] = "Tha";
	char	src1[10] = "lesTha";

	printf("ft - %s\ndest- %s\nsrc - %s\n", strncat(dest, src, 3), dest, src);
	printf("ft - %s\ndest -%s\nsrc - %s\n", ft_strncat(dest1, src1, 3), dest1, src1);
	return (0);
}
