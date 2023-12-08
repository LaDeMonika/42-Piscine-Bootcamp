/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caigner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:11:55 by caigner           #+#    #+#             */
/*   Updated: 2023/07/08 13:58:53 by ppfiel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_char_for_position(int col, int row, int x, int y)
{
	int	is_l;
	int	is_r;
	int	is_t;
	int	is_b;

	is_l = (col == 0);
	is_r = (col == x - 1);
	is_t = (row == 0);
	is_b = (row == y - 1);
	if ((is_l && is_t) || (is_r && is_b && (is_r != is_l) && (is_t != is_b)))
		return ('/');
	if ((is_r && is_t) || (is_l && is_b))
		return ('\\');
	if (is_l || is_r || is_t || is_b)
		return ('*');
	return (' ');
}

void	rush(int x, int y)
{
	int	current_row;
	int	current_col;

	current_row = 0;
	current_col = 0;
	while (current_row < y)
	{
		current_col = 0;
		while (current_col < x)
		{
			ft_putchar(get_char_for_position(current_col++, current_row, x, y));
		}
		ft_putchar('\n');
		current_row++;
	}
}
