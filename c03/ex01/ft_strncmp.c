/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:49:30 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/04 09:41:06 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	--s1;
	--s2;
	while(*++s1 == *++s2 && n--)
		if (*s2 == 0x00)
			break ;
	return (*s1 - *s2);
}