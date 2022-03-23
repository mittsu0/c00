/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:12:24 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/22 22:42:19 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;
	char	num_max;

	num = '0';
	num_max = '9';
	while (num <= num_max)
	{
		write(1, &num, 1);
		num++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }