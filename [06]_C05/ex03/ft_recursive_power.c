/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:12:08 by msimic            #+#    #+#             */
/*   Updated: 2023/07/25 21:12:10 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		x = nb * ft_recursive_power(nb, power - 1);
	}
	return (x);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_power(0, 10));
}
*/
