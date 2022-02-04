/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:57:08 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 17:59:12 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = -1;
	while (str[++i])
	{
		k = 0;
		while (str[i + k] == to_find[k])
			++k;
		if (!(to_find[k]))
			return (&str[i]);
	}
	return (0);
}
