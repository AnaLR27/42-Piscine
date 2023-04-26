/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:37:49 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/26 15:48:02 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("Hay letras, tiene q dar 1: %d\n", ft_str_is_uppercase("ASDGD"));
// 	printf("No letras, tiene q dar 0: %d\n", ft_str_is_uppercase("fsd5"));
// 	printf("No letras, tiene q dar 0: %d", ft_str_is_uppercase("fsdA"));
// 	return (0);
// }
