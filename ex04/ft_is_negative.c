/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:51:18 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/22 22:44:20 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (num < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(1);
// 	ft_is_negative(-1);
// 	ft_is_negative(0);
// 	return (0);
// }