/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:49:08 by alorenzo          #+#    #+#             */
/*   Updated: 2023/03/26 22:58:15 by alorenzo         ###   ########.fr       */
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

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_str_is_printable(str[i]) == 0)
        {
            
        }
        
        i++;
    }
    
}
