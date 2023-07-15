/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:32:56 by msimic            #+#    #+#             */
/*   Updated: 2023/07/08 13:33:05 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr) //ak ima zvijezdu onda u main kad pozivam funkciju motam staviti & 1*
{
	*nbr = 42;
}
int	main(void)
{
	int x;
	
	//x = 3;
	ft_ft(&x); //1*
	printf("%d", x);
	//write(1, &x, 1); //write moze samo printat karaktere, a ne intidzere. Pogledaj ascii code
	//x = x +'0';
	//write(1, &x, 2);
}
