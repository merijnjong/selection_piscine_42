/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:35:58 by mjong             #+#    #+#             */
/*   Updated: 2023/06/29 17:27:44 by mjong            ###   ########.fr       */
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

// int	main(void)
// {
// 	int	result = ft_is_prime(38);

// 	printf("%d", result);
// 	return (0);
// }
