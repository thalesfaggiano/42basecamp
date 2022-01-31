/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 07:48:06 by tfaggian          #+#    #+#             */
/*   Updated: 2022/01/31 08:59:31 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_combn(int n)
{
	int	count[n];
	int	i;

	if (n > 9 && n < 1)
		return ;
	i = n + 1;
	while(i--)
	{
		count[i] = i;
	}
}
