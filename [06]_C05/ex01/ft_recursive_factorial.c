/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:05:10 by msimic            #+#    #+#             */
/*   Updated: 2023/07/25 19:05:13 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (x);
	}
	else
	{
		x = nb * ft_recursive_factorial(nb - 1);
	}
	return (x);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_factorial(6));
	return (0);
}
*/
