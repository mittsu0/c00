/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:59:20 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/22 22:54:02 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		if (num == -2147483648)
			write(1, &"-2147483648", 11);
		else
		{
			ft_putchar('-');
			num *= -1;
			ft_putnbr(num);
		}
	}
	else
	{
		if (num >= 10)
		{
			ft_putnbr(num / 10);
			ft_putchar(num % 10 + '0');
		}
		else
			ft_putchar(num + '0');
	}
}

// int	main(void)
// {
// 	ft_putnbr(12345);
// 	write(1, "\n", 1);
// 	ft_putnbr(-12345);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	return (0);
// }