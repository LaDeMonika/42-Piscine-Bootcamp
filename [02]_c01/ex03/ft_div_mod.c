/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:56:24 by msimic            #+#    #+#             */
/*   Updated: 2023/07/08 14:56:28 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}
int	main(void)
{
	int a=9;
	int b=3;
	int *div = &a;
	int *mod = &b;
	
	ft_div_mod(a, b, div, mod);
	printf("%d\n%d", *div, *mod);
}
