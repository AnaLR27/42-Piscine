/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:37:50 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/25 17:56:37 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
//     printf("Hay letras, tiene que dar 1: %d\n", ft_str_is_alpha("assdfghj"));
//     printf("No letras, tiene que dar 0: %d", ft_str_is_alpha("fsd5"));
// 	return (0);
// }
