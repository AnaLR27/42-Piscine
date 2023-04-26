/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:37:07 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/25 18:00:16 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
//     printf("Hay letras, tiene q dar 1: %d\n", ft_str_is_lowercase("asghj"));
//     printf("No letras, tiene que dar 0: %d\n", ft_str_is_lowercase("fsd5"));
//     printf("No letras, tiene que dar 0: %d", ft_str_is_lowercase("fsdA"));
// 	return (0);
// }
