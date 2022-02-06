/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:49:30 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/05 20:41:11 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*addr;

	addr = dest;
	--dest;
	while(*++dest);
	--src;
	++size;
	while(*++src && --size)
		*dest++ = *src;
	*dest = 0x00;
	return (addr);
}
