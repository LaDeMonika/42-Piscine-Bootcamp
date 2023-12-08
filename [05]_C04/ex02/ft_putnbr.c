/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:34:39 by msimic            #+#    #+#             */
/*   Updated: 2023/07/23 18:34:42 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_positive(int nb)
{
	int	temp;
	int	size;

	temp = nb;
	size = 1;
	while (temp > 9)
	{
		temp = temp / 10;
		size *= 10;
	}
	temp = nb;
	while (size)
	{
		ft_putchar((temp / size) + '0');
		temp %= size;
		size /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ft_positive(nb);
}
/*
int main()
{
	ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(2);
    ft_putchar('\n');
    ft_putnbr(9);
    ft_putchar('\n');
    ft_putnbr(10);
    ft_putchar('\n');
    ft_putnbr(30050);
    ft_putchar('\n');
}
*/
//Lili
/*
#include <unistd.h>
#include <limits.h>

char	*ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}
	return (number);
}

#include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = -2147483648;
	ft_putnbr(nbr);
}	
*/
