/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:35:11 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 14:27:21 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] > 0x40 && str[i] < 0x5b)
			str[i] += 0x20;
	while (i-- + 1)
		if ((str[i] < 0x61 || str[i] > 0x7a)
				&& (str[i + 1] > 0x60 && str[i + 1] < 0x7b))
			str[i + 1] -= 0x20;
	
	return (str);
}
