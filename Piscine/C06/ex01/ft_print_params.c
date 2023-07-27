/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:21:45 by msimic            #+#    #+#             */
/*   Updated: 2023/07/26 13:21:48 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	c;

	x = 1;
	while (x < argc)
	{
		c = 0;
		while (argv[x][c] != '\0' )
		{
			ft_putchar(argv[x][c]);
			c++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
