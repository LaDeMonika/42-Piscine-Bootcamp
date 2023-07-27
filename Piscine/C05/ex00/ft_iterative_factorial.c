/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:14:01 by msimic            #+#    #+#             */
/*   Updated: 2023/07/25 17:14:04 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{

	printf("%d", ft_iterative_factorial());
	return 0;
}
*/
