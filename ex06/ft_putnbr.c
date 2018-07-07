/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:36:26 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/06 23:15:53 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	long num = nb;
	if (num >= 0)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else if (num < 0)
	{
		else
		{
			while (num == -2147483648)
			{
				
			}
			num = -num;
		}
	}
}

int		main(void)
{
	ft_putnbr(10);
	ft_putnbr(100000000);
	ft_putnbr(-4894654);
	ft_putnbr(10);
	ft_putnbr(-2147483648);
	return (0);
}
