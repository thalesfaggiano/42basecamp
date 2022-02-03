/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:48:09 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/03 19:23:43 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	col_addr(size_t addr);
void	col_str(char *str, int k);

char	g_dig[16] = "0123456789abcdef";

void	*ft_print_memory(void *addr, unsigned int size)
{
	int			k;
	unsigned int		i;

	i = 0;
	if (size == 0)
		return (addr);
	while (i * 0x10 <= size)
	{
		k = size - ((i + 1) * 0x10);
		if (k > -1)
			k = 0x10;
		else
			k = 0x10 + k;
		col_addr((size_t)addr + (i * 0x10));
		col_str(addr + (i * 0x10), k);
		write(1, "\x0a", 1);
		++i;
	}
	return (addr);
}

void	col_addr(size_t addr)
{
	int	i;
	char	hex[16];

	i = 16;
	while (--i > -1)
	{
		hex[i] = g_dig[addr % 0x10];
		addr /= 0x10;
	}
	write(1, hex, 16);
	write(1, "\x3a\x20", 2);
}

void	col_str(char *str, int k)
{
	int	i;

	i = -1;
	while (++i < k)
	{
		write(1, &g_dig[(str[i] & 0xf0) >> 4], 1);
		write(1, &g_dig[(str[i] & 0x0f)], 1);
		if (i % 2)
			write(1, "\x20", 1);
	}
	while (++i < 17)
	{
		write(1, "\x20\x20", 2);
		if (i % 2)
			write(1, "\x20", 1);
	}
	i = -1;
	while (++i < k)
	{
		if (str[i] > 0x1f && str[i] < 0x7f)
			write(1, &str[i], 1);
		else
			write(1, "\x2e", 2);
	}
}
