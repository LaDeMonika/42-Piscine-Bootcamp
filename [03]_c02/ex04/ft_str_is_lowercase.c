/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:59:02 by msimic            #+#    #+#             */
/*   Updated: 2023/07/15 10:59:06 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char	str1[] = "asdaaf";
	char	str2[] = "!/$#";
	int	rez1 = ft_str_is_lowercase(str1);
	int	rez2 = ft_str_is_lowercase(str2);
	
	printf("lowercase: %d\n", rez1);
	printf("Other: %d", rez2);
}
*/
