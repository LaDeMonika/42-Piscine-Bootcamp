/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:22:18 by msimic            #+#    #+#             */
/*   Updated: 2023/07/26 13:22:20 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	i = argc - 1;
	while (i > 0)
	{
		c = 0;
		while (argv[i][c] != '\0' )
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
