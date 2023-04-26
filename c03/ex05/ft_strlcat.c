/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 21:07:50 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/29 03:17:34 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclength;
	unsigned int	destlength;

	i = 0;
	j = 0;
	srclength = ft_strlen(src);
	destlength = ft_strlen(dest);
	if (destlength >= size)
		return (srclength + size);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (srclength + destlength);
}

// int main(void)
// {
// 	char src[50] = "987";
// 	char dest[50] = "asdaa";
// 	char src1[50] = "987";
// 	char dest1[50] = "asdaa";
// 	int n = 12;

// 	printf("%lu\n", strlcat(dest1, src1, n));
// 	printf("Origen: %s\n", src1);
// 	printf("Destino: %s\n", dest1);
// 	printf("%u\n", ft_strlcat(dest, src, n));
// 	printf("Origen: %s\n", src);
// 	printf("Concatenacion: %s\n", dest);
// 	return (0);
// }
