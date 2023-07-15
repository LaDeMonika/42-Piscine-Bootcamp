/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tf_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:53:56 by msimic            #+#    #+#             */
/*   Updated: 2023/07/10 20:54:03 by msimic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int main(int argc, char *argv[])
{
	char i = 0;
	char dest[20];
	char *src = "jhdhakajbkdshh";
	if (argc == 1)
	{
	ft_strcpy(dest, src);
	write(1, &dest[i], 20); 
	}

	if (argc == 2)
	{
		ft_strcpy(dest, src); //ili argv[i] na mjesto src
		printf("%s", dest);
	}
}
*/
