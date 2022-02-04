/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:49:30 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 13:48:12 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*addr;

	addr = dest;
	--dest;
	while(*++dest);
	--src;
	++nb;
	while(*++src && --nb)
		*dest++ = *src;
	*dest = 0x00;
	return (addr);
}
