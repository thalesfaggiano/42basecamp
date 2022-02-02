/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:58:25 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 18:13:17 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = -1;
	if ( size > 0 )
	{
		while (src[++i] && (unsigned) i < size - 1)
			dest[i] = src[i];
		--i;
		while (dest[++i])
			dest[i] = 0x00;
	}
	i = -1;
	while (src[++i]);
	return (i);
}
