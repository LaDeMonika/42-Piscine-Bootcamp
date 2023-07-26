/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:02:29 by msimic            #+#    #+#             */
/*   Updated: 2023/07/19 22:02:36 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main()
{
	char str[] = "Life is good.";
 	int result = ft_strlen(str);
 	printf("The length of the string is %d.\n", result);
 	return 0;
}
*/
