/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:02:44 by msimic            #+#    #+#             */
/*   Updated: 2023/07/15 11:02:52 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "6";
	char str2[] = "*";
	int rez1 = ft_str_is_numeric(str1);
	int rez2 = ft_str_is_numeric(str2);
	
	printf("Ovo su brojevi: %d\n", rez1);
	printf("Ovo su char: %d", rez2);
}
*/
