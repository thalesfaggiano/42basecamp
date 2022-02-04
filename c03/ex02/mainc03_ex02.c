/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03_ex02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:47:22 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 13:16:59 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[10] = "Tha";
	char	src[10] = "les";
	char	dest1[10] = "Tha";
	char	src1[10] = "les";

	printf("ft - %s\ndest- %s\nsrc - %s\n", strcat(dest, src), dest, src);
	printf("ft - %s\ndest -%s\nsrc - %s\n", ft_strcat(dest1, src1), dest1, src1);
	return (0);
}
