/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:10:08 by msimic            #+#    #+#             */
/*   Updated: 2023/07/25 22:10:14 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	n = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_fibonacci(-4));
}
*/
