/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:48:09 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/03 14:27:23 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	col_addr(size_t addr);
void	col_str(char *str);

char	dig[16] = "0123456789abcdef";

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (addr);
	i = 0;
	while (i * 0x10 <= size)
	{
		col_addr((size_t)addr + (i * 0x10));
		col_str(addr + (i * 0x10));
		write(1, "\x0a", 1);
		++i;
	}
	return (addr);
}

void	col_addr(size_t addr)
{
	char	hex[16];
	int	i;
	
	i = 16;
	while (--i > -1)
	{
		hex[i] = dig[addr % 0x10];
		addr /= 0x10;
	}
	write(1, hex, 16);
	write(1, "\x3a\x20", 2);
}

void	col_str(char *str)
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		write(1, &dig[(str[i] & 0xf0) >> 4], 1);
		write(1, &dig[(str[i] & 0x0f)], 1);
		if ( i % 2 )
			write(1, "\x20", 2);
	}
	i = -1;
	while (++i < 16)
	{
		if (str[i] > 0x1f && str[i] < 0x7f)
			write(1, &str[i], 1);
		else
			write(1, "\x2e", 2);
	}
}
