/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:19:34 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/02 12:50:15 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] > 0x60 && str[i] < 0x7b))
			str[i] += 0x20;
	return (str);
}
