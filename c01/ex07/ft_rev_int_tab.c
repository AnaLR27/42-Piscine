/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:32:31 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/23 21:26:57 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		t = tab[i];
		tab[i] = tab [j];
		tab [j] = t;
	i++;
	j--;
	}
}

// int	main(void)
// {
// 	int	tab[6];
// 	int	size;

// 	size = 6;
// 	tab[6] = {0, 1, 2, 3, 4, 5};
// 	ft_rev_int_tab(tab, size);
// 	printf("%d %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
// 	return (0);
// }
