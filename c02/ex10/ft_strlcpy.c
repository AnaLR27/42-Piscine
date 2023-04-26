/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:48:47 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/27 16:59:31 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (n);
}

// int main(void)
// {
//     char dest[] = "";
//     char src[] = "holavfd";

//     printf("Esto es origen: %s", src);
//     printf("%c", '\n');
//     printf("Esto es dest antes: %s", dest);
//     printf("%c", '\n');
//     printf("Esto es origen longitud: %u", ft_strlcpy(dest, src, 5));
//     printf("%c", '\n');
//     printf("Esto es dest ahora: %s", dest);
//     return (0);
// }
