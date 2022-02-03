/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:48:09 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/03 09:41:51 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	col_addr(size_t addr)
{
	char	*dig;
	char	hex[16];
	int	i;
	
	dig = "0123456789abcdef";
	i = 16;
	while (i-- > -1)
	{
		hex[i] = dig[addr % 0x10];
		addr /= 0x10;
	}
	write(1, hex, 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char		*eol;

	eol = ":\n";
	i = 0;
	while (i * 0x10 <= size)
	{
		col_addr((size_t)addr + (i * 0x10));
		write(1, &eol[0], 1);
		write(1, &eol[1], 1);
		++i;
	}
	return (addr);
}
