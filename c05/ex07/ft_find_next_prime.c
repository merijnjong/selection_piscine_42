/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:17:47 by mjong             #+#    #+#             */
/*   Updated: 2023/06/29 17:31:59 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{	
	int	num;

	num = 2;
	if (nb < 2)
		return (0);
	while (num <= (nb / 2))
	{
		if (nb % num == 0)
		{
			return (0);
		}
		num++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// int	main(void)cp 
// {
// 	int	result = ft_find_next_prime(2147483647);

// 	printf("%d", result);
// 	return (0);
// }
