/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 06:23:55 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 07:22:17 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = -1;
	while ((unsigned) i < n && src[++i])
		dest[i] = src[i];
	while ((unsigned) i < n)
		dest[i++] = 0x00;
	return (dest);
}
