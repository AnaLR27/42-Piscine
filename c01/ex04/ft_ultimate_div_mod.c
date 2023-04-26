/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:29:32 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/23 18:57:48 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a / *b;
	*b = *a % *b;
	*a = t;
}

// int main(void)
// {
//     int a = 8;
//     int b = 4;
//     ft_ultimate_div_mod(&a, &b);
//     printf("%d %d", a, b);
//	 return (0);
// }
