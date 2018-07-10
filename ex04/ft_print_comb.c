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

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	units;

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
				if (hundreds != '7' || tens != '8' || units != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
