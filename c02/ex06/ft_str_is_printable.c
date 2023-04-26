/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:13:56 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/26 15:48:14 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 32 && str[i] <= 126))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("Hay letras, tiene q dar 1: %d\n", ft_str_is_printable("ASDG!-~D"));
// 	printf("No letras, tiene q dar 0: %d\n", ft_str_is_printable("fsdñ5"));
// 	printf("No letras, tiene q dar 0: %d", ft_str_is_printable("fsdA230µ"));
// 	return (0);
// }
