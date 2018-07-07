/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:31:43 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/05 19:03:28 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_printcomb2();

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	char b;
	char c;

	a = 0;
	while (a < 10000)
	{
		b = a / 100;
		c = a % 100;
		if (b < c)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			ft_putchar(' ');
			ft_putchar(48 + c / 10);
			ft_putchar(48 + c % 10);
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
