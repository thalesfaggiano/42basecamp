/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02_ex12.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:35:43 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 22:03:04 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	unsigned int	size;
	void		*addr;
	char		var[100];

	size = 0xa0;
	addr = &var;
	printf("%p\n",ft_print_memory(addr, size));
	return (0);
}
