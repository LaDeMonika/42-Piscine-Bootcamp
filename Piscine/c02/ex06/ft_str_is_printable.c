/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:40:18 by msimic            #+#    #+#             */
/*   Updated: 2023/07/15 11:40:21 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_in_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
	{
		i++;
		if (str[i] == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main()
{
	char	str1[] = "sddgs##";
	char	str2[] = "    ";
	int	rez1 = ft_str_in_printable(str1);
	int	rez2 = ft_str_in_printable(str2);
	
	printf("ovo su printable: %d\n", rez1);
	printf("Ostalo: %d", rez2);
}
