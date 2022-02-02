/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:51:38 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 18:16:49 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char		src[10] = "abcde";
	char		dest[10] = "123";
	unsigned int	size;

	char		src1[10] = "abcde";
	char		dest1[10] = "123";
	unsigned int	size1;

	size1 = strlcpy(dest1, src1, 4);

	printf("%s\n",src1);
	printf("%s\n",dest1);
	printf("%d\n",size1);

	size = ft_strlcpy(dest, src, 4);

	printf("%s\n",src);
	printf("%s\n",dest);
	printf("%d\n",size);
	return (0);
}
