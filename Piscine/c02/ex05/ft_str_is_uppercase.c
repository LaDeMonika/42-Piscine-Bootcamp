/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:39:36 by msimic            #+#    #+#             */
/*   Updated: 2023/07/15 11:39:41 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
int main()
{
	char	str1[] = "AADDD";
	char	str2[] = "121wqe";
	int	rez1 = ft_str_is_uppercase(&str1);
	int	rez2 = ft_str_is_uppercase(&str2);
	
	printf("Ovo su slova: %d\n", rez1);
	printf("Others %d", rez2);
}
*/
