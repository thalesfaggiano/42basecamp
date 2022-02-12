/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:12:14 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/12 18:27:39 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 0x60;
	while (i++ < 0x7a)
		ft_putchar(i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
