/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:05:27 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/25 17:54:39 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char dest[] = "";
//     char src[] = "hola";

//     printf("Esto es dest: %s", dest);
//     printf("%c", '\n');

//     printf("Esto es dest nuevo: %s", ft_strcpy(dest,src));
//     return (0);
// }
