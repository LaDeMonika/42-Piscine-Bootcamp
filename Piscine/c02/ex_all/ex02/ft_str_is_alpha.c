/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:44:46 by msimic            #+#    #+#             */
/*   Updated: 2023/07/11 17:44:49 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!isalpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "Hiimfssskajdadahdo";
	char str2[] = "ahd211";
	int rez1 = ft_str_is_alpha(str1);
	int rez2 = ft_str_is_alpha(str2);
	
	printf("rezultat 1 je : %d\n", rez1);
	printf("rezultat 2 je : %d\n", rez2);
}
*/
