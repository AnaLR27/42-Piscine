/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:59:30 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/25 17:58:04 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= '0' && str[i] <= '9'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
//     printf("Hay numeros, tiene que dar 1: %d\n", ft_str_is_numeric("1456"));
//     printf("No numeros, tiene que dar 0: %d", ft_str_is_numeric("5fsd5"));
// 	return (0);
// }
