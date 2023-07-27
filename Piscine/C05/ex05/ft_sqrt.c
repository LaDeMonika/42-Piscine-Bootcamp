/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:10:15 by msimic            #+#    #+#             */
/*   Updated: 2023/07/26 16:10:19 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	low;
	long	high;
	long	mid;
	long	nbr;

	nbr = nb;
	low = 0;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid < nb)
		{
			low = mid + 1;
		}
		else if (mid * mid > nb)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_sqrt());
}
*/
