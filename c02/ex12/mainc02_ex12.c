/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex12.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:35:43 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/03 10:44:41 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	unsigned int	size;
	char		*var;

	var = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	size = 0x31;
	printf("%p\n",ft_print_memory(&var, size));
	return (0);
}
