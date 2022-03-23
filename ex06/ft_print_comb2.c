/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 01:51:02 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/22 22:51:29 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	digit(int num)
{
	if (num >= 10)
	{
		ft_putchar(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			digit(num1);
			ft_putchar(' ');
			digit(num2);
			if (num1 != 98 || num2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }