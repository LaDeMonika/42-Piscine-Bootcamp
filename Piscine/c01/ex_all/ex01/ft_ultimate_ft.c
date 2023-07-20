/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:47:17 by msimic            #+#    #+#             */
/*   Updated: 2023/07/08 13:47:27 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int **nbr) //ovo pointira vrijednos
{
	**nbr = 42; //ovo uzima vrijednost
}
int main(void)
{
	int x;
	int *y;
	int **z;
	int ***b;

	x = 17981;
	y = &x;
	z = &y;
	b = &z;
	ft_ultimate_ft(z); //ovdje bez zvjezdica, samo naziv
	printf("%d", x); //zvijezdice ovdje dodavati. Ako imamo 3 to znaci idi unazad 3 puta.
}
/*
da bi prinala z npr. moram i u funkciji koju
zovem staviti i dvije zvjezdice. Ovisi koji je pointer.
*/
