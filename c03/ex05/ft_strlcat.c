/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:49:30 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/06 10:42:51 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = d - 1;
	while(dest[++d]);
	while(d + ++s < size && src[s])
		dest[d + s] = src[s];
	dest[d + --s] = 0x00;
	while(src[++s]);
	return (d < size ? d + s : size + s);
}
