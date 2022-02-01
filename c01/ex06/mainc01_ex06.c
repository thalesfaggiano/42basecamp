/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01_ex06.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:52:02 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 16:57:33 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	string[100] = "Eu te amo meu amigo";
	int	size;

	size = ft_strlen(string);
	printf("Size = %d\n",size);
	return (0);
}
