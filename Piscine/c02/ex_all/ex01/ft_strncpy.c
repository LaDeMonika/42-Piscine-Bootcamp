/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:20:03 by msimic            #+#    #+#             */
/*   Updated: 2023/07/11 17:20:15 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = src[n];
	return (dest);
}
/*
int main(void)
{
	char i=0;
	char dest[30];
	char *src = "ahsajkh";
	
	ft_strncpy(dest, src, i);
	//ovdje sam stala
	printf("%s", dest);
}
*/
