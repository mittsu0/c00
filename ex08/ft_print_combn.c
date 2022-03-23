/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:59:20 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/23 21:12:15 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_p(char *p, int n)
{
	int	flag;
	int	i;

	flag = 0;
	i = 1;
	write(1, p, n);
	while (n - i >= 0)
	{
		if (p[n - i] != ('9' - i + 1))
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag)
		write(1, ", ", 2);
}

void	dfs(int col, int n, char *num)
{
	int	i;

	if (col + 1 > n)
		ft_putchar_p(num, n);
	else
	{
		i = 0;
		while (i <= (10 - n + col))
		{
			if (col == 0)
			{
				num[col] = i + '0';
				dfs(col + 1, n, num);
			}
			else
			{
				if ((i + '0') > num[col - 1])
				{
					num[col] = i + '0';
					dfs(col + 1, n, num);
				}
			}
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	num[9];

	dfs(0, n, num);
}

// int	main(void)
// {
// 	ft_print_combn(5);
// 	return (0);
// }