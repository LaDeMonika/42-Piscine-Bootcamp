/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:21:34 by msimic            #+#    #+#             */
/*   Updated: 2023/07/15 19:21:36 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + 32;
		}
		ptr++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char	str[] = "HekafJJOP";
	
	ft_strlowcase(str);
	printf("Lowerc: %s", str);
}
*/
