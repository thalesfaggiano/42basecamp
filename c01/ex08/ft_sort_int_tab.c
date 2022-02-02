/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaggian <tfaggian@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:24:56 by tfaggian          #+#    #+#             */
/*   Updated: 2022/02/01 22:38:09 by tfaggian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int	sw;
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i++ < size - 1)
	{
		while (k < size - 1)
		{
			if (tab[k] > tab[k + 1])
			{
				sw = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = sw;
			}
			++k;
		}
		k = 0;
	}
}
