/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:03:40 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/29 03:08:26 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}

// int	main(void)
// {
// 	char s1[] = "Perro";
// 	char s2[] = "Perra";
// 	printf("%i", ft_strcmp(s1, s2));
// 	return (0);
// }
