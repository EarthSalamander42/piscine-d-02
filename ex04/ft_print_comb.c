/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 20:51:11 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/05 15:24:01 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		hundreds;
	int		tens;
	int		units;

	hundreds = 48 - 1;
	while (++hundreds <= 57)
	{
		tens = hundreds;
		while (++tens <= 57)
		{
			units = tens;
			while (++units <= 57)
			{
				ft_putchar(hundreds);
				ft_putchar(tens);
				ft_putchar(units);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
