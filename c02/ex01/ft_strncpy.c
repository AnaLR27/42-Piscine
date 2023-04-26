/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:59:47 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/26 21:45:38 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "dvfghjhgfredwsdfgh";
// 	char	src[] = "hi";

// 	printf("Esto es dest: %s", dest);
// 	printf("%c", '\n');
// 	printf("Esto es dest nuevo: %s", ft_strncpy(dest,src,5));
// 	return (0);
// }
