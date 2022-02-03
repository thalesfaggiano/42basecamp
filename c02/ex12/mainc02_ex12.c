/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex12.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:35:43 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/03 13:16:10 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	unsigned int	size;
	char		*var;

	var = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBB";
	size = 0x14;
	printf("%p - %d - %s\n",var, size, var);
	printf("%p\n",ft_print_memory(var, size));
	return (0);
}
