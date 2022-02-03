/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:48:09 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/03 08:53:33 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	mem_addr(size_t addr)
{
	char	*dig;
	char	hex[16];
	int	i;
	
	dig = "0123456789abcdef:";
	i = 16;
	while (addr)
	{
		hex[--i] = dig[addr % 0x10];
		addr /= 0x10;
	}
	write(1, hex, 16);
	write(1, &dig[16], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char		*eol;

	eol = "\n";
	i = 0;
	while (i * 0x10 <= size)
	{
		mem_addr((size_t)addr + (i * 0x10));
		write(1, eol, 1);
		++i;
	}
	return (addr);
}
