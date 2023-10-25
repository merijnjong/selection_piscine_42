/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:46:41 by mjong             #+#    #+#             */
/*   Updated: 2023/06/29 17:27:57 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}

// int	main(void)
// {
// 	int	result;

// 	result = ft_iterative_factorial(0);
// 	printf("%i", result);
// }
