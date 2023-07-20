/* ************************************************************************** */
/*                                
                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:32:18 by msimic            #+#    #+#             */
/*   Updated: 2023/07/06 13:19:33 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*test 1 */
#include <unistd.h>
//ovaj void nema nista sa onim dole 1*
void	ft_putchar(char c) // 2*
{
	write(1, &c, 1);
}

int		main(void) //sa ovim 1*
{
	char x;

	x = 'm';

	ft_putchar(x); //ovaj x je ono c iz parametra u zagradama 2*
	return (0);
}

