/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:25:22 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/29 03:08:40 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0')
		&& (s1[i] == s2[i]) && (i < (n - 1)))
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}

// int	main(void)
// {
// 	char s1[] = "aabkZasdfasdfd";
// 	char s2[] = "aabkZasdfasdf";
// 	int	n = 0;
// 	printf("%i\n", ft_strncmp(s1, s2, n));
// 	printf("%i", strncmp(s1, s2, n));
// 	return (0);
// }
