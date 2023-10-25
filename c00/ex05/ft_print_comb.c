/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:29:56 by mjong             #+#    #+#             */
/*   Updated: 2023/06/28 10:35:54 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num1, char num2, char num3)
{
	char	c;
	char	s;

	c = ',';
	s = ' ';
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (num1 != '7')
	{
		write(1, &c, 1);
		write(1, &s, 1);
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '1';
	num3 = '2';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_putchar(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
