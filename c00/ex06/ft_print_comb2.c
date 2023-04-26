/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:18:18 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/24 14:14:18 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	arr[5];

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			arr[0] = '0' + (n1 / 10);
			arr[1] = '0' + (n1 % 10);
			arr[2] = ' ';
			arr[3] = '0' + (n2 / 10);
			arr[4] = '0' + (n2 % 10);
			write(1, &arr, 5);
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 1);
			}
			n2++;
		}
		n1++;
	}
}

// int	main(void)

// {
// 	ft_print_comb2();
// }
