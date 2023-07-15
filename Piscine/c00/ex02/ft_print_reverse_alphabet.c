/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:53:42 by msimic            #+#    #+#             */
/*   Updated: 2023/07/06 19:31:59 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	s;

	s = 'z';
	while (s >= 'a')
	{
		write (1, &s, 1);
		s--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return 0;
}
