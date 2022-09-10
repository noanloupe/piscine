/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noloupe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:48:45 by noloupe           #+#    #+#             */
/*   Updated: 2022/09/10 16:49:20 by noloupe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_col(char a, char b, char c, int x);

void	rush(int x, int y)
{
	int	line;

	if (x <= 0 || y <= 0)
	{
		write(1, "Erreur, veuillez entrer des parametres corrects\n", 48);
		return ;
	}
	line = 1;
	while (line <= y)
	{
		if (line == 1)
			ft_print_col('/', '\\', '*', x);
		else if (line == y)
			ft_print_col('\\', '/', '*', x);
		else
			ft_print_col('*', '*', ' ', x);
		line++;
		ft_putchar('\n');
	}
}

void	ft_print_col(char a, char b, char c, int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(a);
		else if (col == x)
			ft_putchar(b);
		else
			ft_putchar(c);
		col++;
	}
}
